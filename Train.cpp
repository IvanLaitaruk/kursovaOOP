#include "Train.h"


//--------------------------------------------------------------------------------------------------------------
	//�������� ������ �� ���������� �������(�����,�, % � �.�.)
	//��������������� ��� �������� ����������� ������� ����� ���� �������
	//������� ��������� �������� � ��� ����� ��� ������
void worksheet::Train::CheckStrForUnacSymbols(string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (!isalpha(str[i]) && str[i] != ' ' && str[i] != '-')
		{
			throw TrainException("The string is unacceptable.", str);
		}
	}
}
//--------------------------------------------------------------------------------------------------------------
	//����������� �� �������������
worksheet::Train::Train()
{
	this->id = "empty";
	this->distance = 0;
}
//--------------------------------------------------------------------------------------------------------------
	//��������� ���������� ������ ��� ��������� ������
worksheet::Train::Train(char* newTrain)
{
	char* delims = " |,().:";
	char* tempStr = strtok(newTrain, delims);
	this->id = tempStr;
	tempStr = strtok(nullptr, delims);
	CheckStrForUnacSymbols(tempStr);
	this->departure.place = tempStr;
	tempStr = strtok(nullptr, delims);
	CheckStrForUnacSymbols(tempStr);
	this->arrival.place = tempStr;
	this->way.resize(WAY_SIZE);
	for (int i = 0; i < WAY_SIZE; ++i)
	{
		tempStr = strtok(nullptr, delims);
		CheckStrForUnacSymbols(tempStr);
		way[i].place = tempStr;
		tempStr = strtok(nullptr, delims);
		way[i].t_departure.tm_hour = stoi(tempStr);
		tempStr = strtok(nullptr, delims);
		way[i].t_departure.tm_min = stoi(tempStr);
		tempStr = strtok(nullptr, delims);
		way[i].t_departure.tm_mday = stoi(tempStr);
		tempStr = strtok(nullptr, delims);
		way[i].t_departure.tm_mon = stoi(tempStr);
		tempStr = strtok(nullptr, delims);
		way[i].t_arrival.tm_hour = stoi(tempStr);
		tempStr = strtok(nullptr, delims);
		way[i].t_arrival.tm_min = stoi(tempStr);
		tempStr = strtok(nullptr, delims);
		way[i].t_arrival.tm_mday = stoi(tempStr);
		tempStr = strtok(nullptr, delims);
		way[i].t_arrival.tm_mon = stoi(tempStr);
	}
	tempStr = strtok(nullptr, delims);
	this->departure.t_departure.tm_hour = stoi(tempStr);
	tempStr = strtok(nullptr, delims);
	this->departure.t_departure.tm_min = stoi(tempStr);
	tempStr = strtok(nullptr, delims);
	this->departure.t_departure.tm_mday = stoi(tempStr);
	tempStr = strtok(nullptr, delims);
	this->departure.t_departure.tm_mon = stoi(tempStr);
	tempStr = strtok(nullptr, delims);
	this->arrival.t_arrival.tm_hour = stoi(tempStr);
	tempStr = strtok(nullptr, delims);
	this->arrival.t_arrival.tm_min = stoi(tempStr);
	tempStr = strtok(nullptr, delims);
	this->arrival.t_arrival.tm_mday = stoi(tempStr);
	tempStr = strtok(nullptr, delims);
	this->arrival.t_arrival.tm_mon = stoi(tempStr);
	tempStr = strtok(nullptr, delims);
	this->distance = stod(tempStr);
}
//--------------------------------------------------------------------------------------------------------------
	//����������� ���������
worksheet::Train::Train(const Train& train)
{
	this->id = train.id;
	this->arrival = train.arrival;
	this->departure = train.departure;
	this->way = train.way;
	this->distance = train.distance;
}
//--------------------------------------------------------------------------------------------------------------
	//�������� �������� �������, ����� ���� ����� �����
	//������� true ��� �������� ���� ������� �� false ���� ���� �������
bool worksheet::Train::findStation(string station)
{
	bool result = false;
	if (station == this->arrival.place || station == this->departure.place)
	{
		result = true;
	}
	for (int i = 0; i < WAY_SIZE; i++)
	{
		if (station == this->way[i].place)
		{
			result = true;
			break;
		}
	}
	return result;
}
//--------------------------------------------------------------------------------------------------------------
	//�������� �������� ��������� �������, ����� ���� ����� �����
	//������� true ��� �������� ���� ��������� ������� �� false ���� ���� �������
bool worksheet::Train::findDeparture(string departure)
{
	bool result = false;
	if (departure == this->departure.place)
	{
		result = true;
	}
	return result;
}
//--------------------------------------------------------------------------------------------------------------
	//�������� �������� ������ �������, ����� ���� ����� �����
	//������� true ��� �������� ���� ������ ������� �� false ���� ���� �������
bool worksheet::Train::findArrival(string arrival)
{
	bool result = false;
	if (arrival == this->arrival.place)
	{
		result = true;
	}
	return result;
}
//--------------------------------------------------------------------------------------------------------------
	//������� ������� �������� ������ � ��/���
double worksheet::Train::getMediumSpeed()
{
	int arrive = convertTimeToInt(this->arrival.t_arrival); //��� � ��������, ���� ����� �������������
	int depart = convertTimeToInt(this->departure.t_departure); //��� � ��������, ���� ����� �������
	return this->distance / ((arrive - depart) / 60.0);
}
//--------------------------------------------------------------------------------------------------------------
	//������� ��������� �� ������ �������, ���� ���� �������� ����� ������� �����������, 
	//������ ��� �������� �������
worksheet::Station& worksheet::Train::getStation(Station station)
{
	Station emptyStation;
	if (station.place == this->arrival.place)
	{
		return this->arrival;
	}
	else if (station.place == this->departure.place)
	{
		return this->departure;
	}
	for (int i = 0; i < WAY_SIZE; ++i)
	{
		if (station.place == this->way[i].place)
		{
			return this->way[i];
		}
	}
	return emptyStation;
}
//--------------------------------------------------------------------------------------------------------------
	//������� ������ � ������ "| id | ���� | �������� | ������ ������� | ��� ����� | ��� �������� | ���������"
std::string worksheet::Train::getTrainStr()
{
	string result = this->id;
	result += " | ";
	result += this->departure.place;
	result += " | ";
	result += this->arrival.place;
	result += " | ";
	for (int i = 0; i < WAY_SIZE; i++)
	{
		result += formatStringStation(this->way[i]);
		if (i != WAY_SIZE - 1) { result += ", "; }
	}
	result += " | ";
	result += formatStringTime(this->departure.t_departure);
	result += " | ";
	result += formatStringTime(this->arrival.t_arrival);
	result += " | ";
	result += to_string((int)this->distance);
	return result;
}
//--------------------------------------------------------------------------------------------------------------
	//������� �������� true ���� ��� toFind ����������� �� ���������� ���� start �� end
bool worksheet::findBetweenTime(tm& toFind, tm& start, tm& end)
{
	//����������� ���� � �������
	int t_toFind = convertTimeToInt(toFind);
	int t_start = convertTimeToInt(start);
	int t_end = convertTimeToInt(end);
	if (t_toFind >= t_start && t_toFind <= t_end) { return true; }
	else { return false; }
}
//--------------------------------------------------------------------------------------------------------------
	//������� ��� � �������� ����������� �� ��������� tm
long worksheet::convertTimeToInt(tm& time)
{
	long result = time.tm_min;
	result += MINUTES_IN_HOUR * (time.tm_hour + HOURS_IN_DAY * (time.tm_mday + time.tm_mon * DAYS_IN_MONTH));
	return result;
}
//--------------------------------------------------------------------------------------------------------------
	//������� ������ � ������ "����̳����.����� ������:�������"
std::string worksheet::formatStringTime(tm& time)
{
	string result;
	if (time.tm_hour < 10)
	{
		result += "0";
	}
	result += to_string(time.tm_hour);
	result += ":";
	if (time.tm_min < 10)
	{
		result += "0";
	}
	result += to_string(time.tm_min);
	result += " ";
	if (time.tm_mday < 10)
	{
		result += "0";
	}
	result += to_string(time.tm_mday);
	result += ".";
	if (time.tm_mon < 10)
	{
		result += "0";
	}
	result += to_string(time.tm_mon);
	return result;
}
//--------------------------------------------------------------------------------------------------------------
	//������� ������ � ������ "���� (����̳����.����� ������:�������, ����̳����.����� ������:�������)"
std::string worksheet::formatStringStation(Station& st)
{
	string result = st.place;
	result += " (";
	result += formatStringTime(st.t_arrival);
	result += ", ";
	result += formatStringTime(st.t_departure);
	result += ")";
	return result;
}
//--------------------------------------------------------------------------------------------------------------