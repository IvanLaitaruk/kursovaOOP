#include "AllTrains.h"


//--------------------------------------------------------------------------------------------------------------
		//сортування методом злиття; етап розбиття
		//сортування за місцем початкової станції
void worksheet::AllTrains::MergeSort(int begin, int end)
{
	if (begin >= end)
		return;
	int mid = (begin + end) / 2;
	this->MergeSort(begin, mid);
	this->MergeSort(mid + 1, end);
	merging(begin, mid, end);
}
//--------------------------------------------------------------------------------------------------------------
		//сортування метод злиття; етап злиття
		//сортування за місцем початкової станції
void worksheet::AllTrains::merging(int begin, int mid, int end)
{
	vector<Train> leftPart(mid - begin + 1);
	vector<Train> rightPart(end - mid);
	for (int i = 0; i < leftPart.size(); i++) { leftPart[i] = this->trains[begin + i]; }
	for (int i = 0; i < rightPart.size(); i++) { rightPart[i] = this->trains[mid + 1 + i]; }
	int i, j = i = 0, k = begin;
	for (; i < leftPart.size() && j < rightPart.size(); ++k)
	{   //порівняння початкових станцій за алфавітним порядком
		if (leftPart[i].getDeparture().place.compare(rightPart[j].getDeparture().place) < 0)
		{
			this->trains[k] = leftPart[i];
			++i;
		}
		else
		{
			this->trains[k] = rightPart[j];
			++j;
		}
	}
	for (; i < leftPart.size(); ++i, ++k) { this->trains[k] = leftPart[i]; }
	for (; j < rightPart.size(); ++j, ++k) { this->trains[k] = rightPart[j]; }
}
//--------------------------------------------------------------------------------------------------------------
		//сортування швидким методом
		//сортування за середньою швидкістю потягів
void worksheet::AllTrains::QuickSort(int begin, int end)
{
	if (begin < end)
	{
		int pi = partition(begin, end);
		QuickSort(begin, pi - 1);
		QuickSort(pi + 1, end);
	}
}
//--------------------------------------------------------------------------------------------------------------
int worksheet::AllTrains::partition(int begin, int end)
{
	Train baseTr = this->trains[end];
	int i = begin - 1;
	for (int j = begin; j <= end - 1; j++)
	{//порівняння середні швидкостей потягів
		if (this->trains[j].getMediumSpeed() <= baseTr.getMediumSpeed())
		{
			i++;
			swap(i, j);
		}
	}
	swap(i + 1, end);
	return (i + 1);
}
//--------------------------------------------------------------------------------------------------------------
void worksheet::AllTrains::swap(int i, int j)
{
	Train tempTr = this->trains[i];
	this->trains[i] = this->trains[j];
	this->trains[j] = tempTr;
}
//--------------------------------------------------------------------------------------------------------------
		//сортування методом Шела
		//сортування за початковою станцією
		//використовується для групування потягів за початковою станцією
void worksheet::AllTrains::ShellSortArrival()
{
	int i, j, pos = 3;
	Train temp;
	while (pos > 0)
	{
		for (i = 0; i < this->trains.size(); i++)
		{
			j = i;
			temp = this->trains[i];
			//порівняння стрічок місць початкових станцій
			while ((j >= pos) && (this->trains[j - pos].getArrival().place.compare(temp.getArrival().place) <= 0))
			{
				this->trains[j] = this->trains[j - pos];
				j -= pos;
			}
			this->trains[j] = temp;
		}
		if (pos / 2 != 0)
			pos /= 2;
		else if (pos == 1)
			pos = 0;
		else
			pos = 1;
	}
}
//--------------------------------------------------------------------------------------------------------------
		//сортування за проміжною станцією
		//використовується для групування потягів за проміжною станцією
void worksheet::AllTrains::ShellSortWay(int wayStation)
{

	int i, j, pos = 3;
	Train temp;
	while (pos > 0)
	{
		for (i = 0; i < this->trains.size(); i++)
		{
			j = i;
			temp = this->trains[i];
			//порівнянння стрічок місць проміжної станції
			while ((j >= pos) && (this->trains[j - pos].getWay()[wayStation].place.compare(temp.getWay()[wayStation].place) <= 0))
			{
				this->trains[j] = this->trains[j - pos];
				j -= pos;
			}
			this->trains[j] = temp;
		}
		if (pos / 2 != 0)
			pos /= 2;
		else if (pos == 1)
			pos = 0;
		else
			pos = 1;
	}
}
//--------------------------------------------------------------------------------------------------------------
worksheet::AllTrains::AllTrains(){}
//--------------------------------------------------------------------------------------------------------------
//сортування потягів за початковою станцією
void worksheet::AllTrains::sortByDepartureStation()
{
	this->MergeSort(0, this->trains.size() - 1);
}
//--------------------------------------------------------------------------------------------------------------
//повертає вектор потягів, які курсують через задану станцію
std::vector<worksheet::Train> worksheet::AllTrains::findStation(Station station)
{
	vector<Train> foundTrains;
	for (int i = 0; i < this->trains.size(); ++i)
	{
		if (this->trains[i].findStation(station.place))
		{
			foundTrains.push_back(this->trains[i]);
		}
	}
	return foundTrains;
}
//--------------------------------------------------------------------------------------------------------------
//повертає вектор потягів, які відправляються із заданої станції у заданий період часу
std::vector<worksheet::Train> worksheet::AllTrains::findByDepartureAndTime(Station departure, tm timeStart, tm timeEnd)
{
	vector<Train> foundTrainsByDeparture;
	vector<Train> foundTrains;
	for (int i = 0; i < this->trains.size(); ++i)
	{
		if (this->trains[i].findDeparture(departure.place))
		{
			foundTrainsByDeparture.push_back(this->trains[i]);
		}
	}
	for (int i = 0; i < foundTrainsByDeparture.size(); ++i)
	{
		if (findBetweenTime(foundTrainsByDeparture[i].getStation(departure).t_departure, timeStart, timeEnd))
		{
			foundTrains.push_back(foundTrainsByDeparture[i]);
		}
	}
	return foundTrains;
}
//--------------------------------------------------------------------------------------------------------------
//повертає вектор потягів, які прибувають до заданої станції у заданий період часу
std::vector<worksheet::Train> worksheet::AllTrains::findByArrivalAndTime(Station arrival, tm timeStart, tm timeEnd)
{
	vector<Train> foundTrainsByArrival;
	vector<Train> foundTrains;
	for (int i = 0; i < this->trains.size(); ++i)
	{
		if (this->trains[i].findArrival(arrival.place))
		{
			foundTrainsByArrival.push_back(this->trains[i]);
		}
	}
	for (int i = 0; i < foundTrainsByArrival.size(); ++i)
	{
		if (findBetweenTime(foundTrainsByArrival[i].getStation(arrival).t_arrival, timeStart, timeEnd))
		{
			foundTrains.push_back(foundTrainsByArrival[i]);
		}
	}
	return foundTrains;
}
//--------------------------------------------------------------------------------------------------------------
		//заповнення масиву потягів з файлу
		//формат стрічки для зчитування: 
		//"| id | Виїзд | Прибуття | Проміжні станції | Час виїзду | Час прибуття | Дистанція"
void worksheet::AllTrains::operator<<(string filename)
{
	ifstream f;
	f.open(filename);
	string newTrainStr;
	while (getline(f, newTrainStr))
	{
		Train newTrain((char*)newTrainStr.c_str());
		this->trains.push_back(newTrain);
	}
	f.close();
}
//--------------------------------------------------------------------------------------------------------------
		//запис даних у файл
		//формат запису стрічки кожного потяга: 
		//"| id | Виїзд | Прибуття | Проміжні станції | Час виїзду | Час прибуття | Дистанція"
void worksheet::AllTrains::operator>>(string filename)
{
	ofstream f;
	f.open(filename);
	for (int i = 0; i < this->trains.size(); i++)
	{
		f << this->trains[i].getTrainStr();
		f << "\n";
	}
	f.close();
}
//--------------------------------------------------------------------------------------------------------------
		//виведення списку потягів у таблицю
void worksheet::AllTrains::printInTable(DataGridView^ dgv)
{
	int nListVolume = this->trains.size();
	dgv->RowCount = nListVolume * WAY_SIZE;
	dgv->ColumnCount = COLUMN_COUNT;
	for (int i = 0, k = 0; i < dgv->RowCount; i += WAY_SIZE, k++)
	{
		dgv->Rows[i]->Cells[0]->Value = gcnew String(this->trains[k].getId().c_str());
		dgv->Rows[i]->Cells[1]->Value = gcnew String(this->trains[k].getDeparture().place.c_str());
		dgv->Rows[i]->Cells[2]->Value = gcnew String(this->trains[k].getArrival().place.c_str());
		for (int j = i, w = 0; w < WAY_SIZE; j++, w++)
		{
			dgv->Rows[j]->Cells[3]->Value = gcnew String(formatStringStation(this->trains[k].getWay()[w]).c_str());
		}
		dgv->Rows[i]->Cells[4]->Value = gcnew String(formatStringTime(this->trains[k].getDeparture().t_departure).c_str());
		dgv->Rows[i]->Cells[5]->Value = gcnew String(formatStringTime(this->trains[k].getArrival().t_arrival).c_str());
		string distance;
		distance += to_string((int)this->trains[k].getDistance());
		distance += " km";
		dgv->Rows[i]->Cells[6]->Value = gcnew String(distance.c_str());
	}
}
//--------------------------------------------------------------------------------------------------------------
		//виведення списку id потягів та їхніх середніх швидкостей у таблицю
void worksheet::AllTrains::printInTableAverageSpeed(DataGridView^ dgv)
{
	int nListVolume = this->trains.size();
	dgv->RowCount = nListVolume;
	dgv->ColumnCount = COLUMN_COUNT_AV;
	for (int i = 0; i < nListVolume; i++)
	{
		dgv->Rows[i]->Cells[0]->Value = gcnew String(this->trains[i].getId().c_str());
		string speed = to_string((int)this->trains[i].getMediumSpeed());
		speed += " km/hour";
		dgv->Rows[i]->Cells[1]->Value = gcnew String(speed.c_str());
	}
}
//--------------------------------------------------------------------------------------------------------------
		//сортування за середньою швидкістю потягів
void worksheet::AllTrains::sortByAverageSpeed()
{
	this->QuickSort(0, this->trains.size() - 1);
}
//--------------------------------------------------------------------------------------------------------------
		//згрупувати потяги за початковою станцію і вивести у таблицю
void worksheet::AllTrains::groupByArrival(DataGridView^ dgv)
{
	this->ShellSortArrival();
	this->printInTable(dgv);
	Train temp = this->trains[0];
	int j = 0;
	for (size_t i, k = i = 0; i < this->trains.size(); i++, k += WAY_SIZE)
	{
		if (this->trains[i].getArrival().place != temp.getArrival().place)
		{
			temp = this->trains[i];
			++j;
		}
		for (size_t t = k; t < k + WAY_SIZE; t++)
		{
			switch (j % WAY_SIZE)
			{
			case 0:
				dgv->Rows[t]->DefaultCellStyle->BackColor = Color::LightBlue;
				break;
			case 1:
				dgv->Rows[t]->DefaultCellStyle->BackColor = Color::LightCoral;
				break;
			case 2:
				dgv->Rows[t]->DefaultCellStyle->BackColor = Color::LightGreen;
				break;
			default:
				break;
			}
		}
	}
}
//--------------------------------------------------------------------------------------------------------------
		//згрупувати потяги за проміжною станцію і вивести у таблицю
void worksheet::AllTrains::groupByWay(DataGridView^ dgv, int wayStation)
{
	this->ShellSortWay(wayStation);
	this->printInTable(dgv);
	Train temp = this->trains[0];
	int j = 0;
	for (size_t i, k = i = 0; i < this->trains.size(); i++, k += WAY_SIZE)
	{
		if (this->trains[i].getWay()[wayStation].place != temp.getWay()[wayStation].place)
		{
			temp = this->trains[i];
			++j;
		}
		for (size_t t = k; t < k + WAY_SIZE; t++)
		{
			switch (j % WAY_SIZE)
			{
			case 0:
				dgv->Rows[t]->DefaultCellStyle->BackColor = Color::LightBlue;
				break;
			case 1:
				dgv->Rows[t]->DefaultCellStyle->BackColor = Color::LightCoral;
				break;
			case 2:
				dgv->Rows[t]->DefaultCellStyle->BackColor = Color::LightGreen;
				break;
			default:
				break;
			}
		}
	}
}
//--------------------------------------------------------------------------------------------------------------