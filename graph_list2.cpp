#include<iostream>
using namespace std;
class Node
{
	public:
	int vertex;
	Node *next;
	Node(int v)
	{
		vertex = v;
		next = NULL;
	}
};
class List
{
	Node *adjList[10];
	int noVertex;
	public:
		List()
		{
			for(int i=0;i<10;i++)
			{
				adjList[i] =NULL;
				noVertex =0;
			}
		}
		void addVertex()
		{
			if(noVertex < 10)
			{
				noVertex++;
				cout<<noVertex<<" "<<"Added in List"<<endl;
			}
			else
			{
				cout<<"Graph vertex is full"<<endl;
			}
		}
		void addEdge(int src,int dest)
		{
			if(src > 0 && src <=noVertex && dest >0 && dest <= noVertex)
			{
				Node *newnode = new Node(dest);
				newnode->next =adjList[src -1];
				adjList[src-1] = newnode;

				newnode = new Node(src);
				newnode->next =adjList[dest-1];
				adjList[dest-1] =newnode;
    			cout<<src<<" "<<dest<<" "<<"edge added"<<endl;
			}
			else
			{
				cout<<"Invalid vertex"<<endl;
			}
		}
		void print()
		{
			for(int i=0;i<noVertex;i++)
			{
				cout<<"Vertex"<<" "<<i+1<<":";
				Node *temp =adjList[i];
				while(temp !=NULL)
				{
					cout<<temp->vertex<<" ";
					temp = temp->next;
				}
				cout << endl;
			}
		}
};
int main()
{
	List li;
	li.addVertex();
	li.addVertex();
	li.addVertex();
	li.addVertex();
	li.addVertex();

	li.addEdge(1,2);
	li.addEdge(2,3);
	li.addEdge(3,5);
	li.addEdge(4,5);
	li.addEdge(5,1);
	li.print();
}

