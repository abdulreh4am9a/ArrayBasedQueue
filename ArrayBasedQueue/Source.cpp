#include"queue.h"
int main() {
	queue<char> q(5);
	q.push('A');
	q.push('B');
	q.push('C');
	q.push('D');
	queue<char>q2(5);
	q2 = q;
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
	while (!q2.empty()) {
		cout << q2.front() << " ";
		q2.pop();
	}
	return 0;
}