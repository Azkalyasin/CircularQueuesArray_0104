
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
		//cek apakah antrin kosong
		if (rear == -1) {
			cout << "Queue underflow\n";
			return;
		}
		cout << "\nthe element deleted from the queue is: " << queue_array[front] << "\n";


		//cek antrian jika hanya memiliki 1 element
		if (front == rear) {
			front = -1;
			rear = -1;
		}
		else {
			//jika element yang di hapus berada di posisi terakhir array, kembali ke array awal
			if (front == Max - 1)
				front = 0;
			else
				front = front + 1;
		}
	

		void dispay() {

		}


	}





};

int main()
{

}
