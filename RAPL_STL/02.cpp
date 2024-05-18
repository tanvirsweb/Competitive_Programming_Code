#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    //all standard input (cin>>,scanf(),...) will be taken from in.txt file not input console
    
    queue<int> q;
    //5 10 15 3
    //queue-->like a pipe/line in ticket counter-->insert only in end/back
    //Can access only 1st element.
    
    q.push(10);
    cout<<"Number of elments in queue:"<<q.size()<<endl;
    cout<<"q.empty(): "<<q.empty()<<endl;
    //empty()  -->return 1 if empty
    //empty()  -->0 if there is element in queue

    cout<<"queueName.front():"<<q.front()<<endl;//10
    if( !q.empty() )
        q.pop();//dlete 1st element
    
    //pop()-->delete 1st elemnet
    //if queue is empty.But you want to pop() element-->runtime error

    //front() -> 1st element at queue
    //we can access only 1st element in queue

    //queue--> numbers are not sorted-->serial acording to insertion serial

    priority_queue<int> pq;
    //same as queue.But elements are automatically "Sorted"
    //maximum/largest-->maximum priority value stays at first

    pq.push(10);
    pq.push(5);
    pq.push(20);

    // error: cout<<pq.front()<<"\t "<<pq.front()<<"\t "<<pq.front()<<endl;

    cout<<pq.top()<<endl;
    pq.pop();
    
    cout<<pq.top()<<endl;
    pq.pop();
    
    cout<<pq.top()<<endl;
    pq.pop();

    //pq.pop()-->error as pq queue is empty.
    
    priority_queue<string>ps;
    ps.push("string1");
    ps.push("s2");//lexicographically check maximum priority

    cout<<ps.top()<<" "<<ps.top()<<endl;
    return 0;
}