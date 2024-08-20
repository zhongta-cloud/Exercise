// CplusplusChapter12.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Worker.h"
#include<string>
#include"QueueTp.h"
using namespace std;
const int WORKERSIZE = 3;

int main() {
	using std::cout;
	using std::endl;

	Worker* ptrWorker[WORKERSIZE];
	for (int i = 0; i < WORKERSIZE; ++i) {
		ptrWorker[i] = new Worker();
		ptrWorker[i]->Set();
	}

	for (int i = 0; i < WORKERSIZE; ++i) {
		ptrWorker[i]->Show();
	}

	cout << endl;
	QueueTp<Worker> queueWorker(WORKERSIZE);
	cout << "Is the queue empty?" << endl;
	cout << (queueWorker.isEmpty() ? "True" : "False") << endl;

	for (int i = 0; i < WORKERSIZE; ++i) {
		queueWorker.enqueue(*ptrWorker[i]);
	}
	cout << "What is number of elements in the queue?" << endl;
	cout << queueWorker.queuecount() << endl;
	cout << "Is the queue full?" << endl;
	cout << (queueWorker.isFull() ? "True" : "False") << endl;

	for (int i = 0; i < WORKERSIZE; ++i) {
		delete ptrWorker[i];
	}

	return 0;
}

