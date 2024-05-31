
#include <iostream>
using namespace std;

class Queues {
	int front, rear, Max = 5;
	int queue_array[5];

public:
	Queues() {
		front = -1;
		rear = -1;
	}



	void insert() {
		int num;
		cout << "enter a number: ";
		cin >> num;
		cout << endl;

		//cek apakah antrian penuh
		if ((front == 0 && rear == Max - 1) || (front == rear + 1)) {
			cout << "\nQueue overflow\n";
			return;
		}
		//cek antrian kosong
		if (front == -1) {
			front = 0;
			rear = 0;
		}
		else {
			//jika reare berada di akhir array
			if (rear == Max - 1)
				rear = 0;
			else
				rear = rear + 1;
		}
		queue_array[rear] = num;
	}

	void remove() {

	}




};

int main()
{

}
