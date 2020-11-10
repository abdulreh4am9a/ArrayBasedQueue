#include"queue.h"
int main() {
	queue<char> q(5);
	q.push('A');
	q.push('B');
	q.push('C');
	q.push('D');
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}