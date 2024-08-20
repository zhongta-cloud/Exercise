#pragma once
template<typename T>
class QueueTp
{
public:
	QueueTp(int qs=Q_SIZE);
	~QueueTp();
	bool isEmpty()const;
	bool isFull()const;
	int queuecount()const;
	bool enqueue(const T & item);
	bool dequeue(T & item);

private:
	struct Node { T item; struct Node * next; };
	enum {Q_SIZE=10};
	Node *front;
	Node *rear;
	int items;
	const int qsize;
	QueueTp(const QueueTp & q) :qsize(0) {};
	QueueTp & operator=(const QueueTp & q) { return *this; }
};

template <typename  T>
QueueTp<T>::QueueTp(int qs):qsize(qs)
{
	front = rear = nullptr;
	items = 0;
}

template <typename  T>
QueueTp<T>::QueueTp::~QueueTp()
{	
	 Node* temp;
	while (front != nullptr) {
		temp = front;
		front = front->next;
		delete temp;
	}

}
template <typename  T>
bool QueueTp<T>::isEmpty()const {
	return items == 0;
}

template <typename  T>
bool QueueTp<T>::isFull()const {

	return items == qsize;
}
template <typename  T>
int QueueTp<T>::queuecount() const {
	return items;
}
template <typename  T>
bool QueueTp<T>::enqueue(const T & item) {
	if (isFull())
		return false;

	Node *temp = new Node;
	temp->item = item;
	temp->next = nullptr;

	if (front == nullptr) {
		front = rear = temp;
	}
	else {
		rear->next = temp;
		rear = temp;
	}

	++items;

	return true;
}
template <typename  T>
bool QueueTp<T>::dequeue(T & item) {
	if (isEmpty())
		return false;

	item = front->item;
	Node *temp;
	temp = front;
	front = front->next;
	delete temp;
	--items;
	return true;
}