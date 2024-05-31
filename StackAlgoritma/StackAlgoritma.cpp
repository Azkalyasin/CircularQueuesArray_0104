
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
	}

	void dispay() {
		int front_position = front;
		int reare_position = rear;


		//cek apakah antrian kosong
		if (front == -1) {
			cout << "queue is empty\n";
			return;
		}

		cout << "\nelement in the queue ara ....\n";

		if (front_position <= reare_position) {
			while (front_position <= reare_position) {
				cout << queue_array[front_position] << "  ";
				front_position++;
			}
			cout << endl;
		}
		else {
			while (front_position <= Max - 1) {
				cout << queue_array[front_position] << "  ";
				front_position++;

			}
			front_position = 0;

			while (front_position <= reare_position)
			{
				cout << queue_array[front_position] << "  ";
				front_position++;
			}
			cout << endl;
		}
	}
};

int main()
{

}
