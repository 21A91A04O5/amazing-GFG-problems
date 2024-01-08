//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        Node *pre1=NULL;
        Node *cur1=node1;
        Node *nex1=NULL;
        while(cur1!=NULL)
        {
            nex1=cur1->next;
            cur1->next=pre1;
            pre1=cur1;
            cur1=nex1;
        }
        node1=pre1;
        Node *pre2=NULL;
        Node *cur2=node2;
        Node *nex2=NULL;
        while(cur2!=NULL){
            nex2=cur2->next;
            cur2->next=pre2;
            pre2=cur2;
            cur2=nex2;
        }
        node2=pre2;
        Node *n=node1;
        Node *p=n;
        if(!node1)return node2;
        if(!node2)return node1;
        Node *ans = NULL;
        Node *temp = NULL;
        while(node1!=NULL && node2!=NULL){
            if(node1->data > node2->data){
                if(temp==NULL){
                    temp = node1;
                    ans = node1;
                }
                else{
                  ans->next = node1;
                  ans = ans->next;
                  
                }
                node1 = node1->next;
                ans->next = NULL;
            }
            else{
                if(temp==NULL){
                    temp = node2;
                    ans = node2;
                }
                else{
                ans->next = node2;
                ans = ans->next;
                }
                node2 = node2->next;
                ans->next = NULL;
            }
        }
        if(node1){ans->next = node1;}
        if(node2)ans->next = node2;
        // if()
        
        // while(node1!=NULL and node2!=NULL){
        //     Node *n2;
        //     if(node1->data > node2->data){
        //         n2->data=node1->data;
        //         n->next=n2;
        //         node1=node1->next;
        //         n=n->next;
        //     }
        //     else{
        //         n2->data=node2->data;
        //         n->next=n2;
        //         node2=node2->next;
        //         n=n->next;
        //     }
        // }
        // while(node1!=NULL){
        //     Node *n1;
        //     n1->data=node1->data;
        //     n->next=n1;
        //     node1=node1->next;
        //     n=n->next;
        // }
        // while(node2!=NULL){
        //     Node *n2;
        //     n2->data=node2->data;
        //     n->next=n2;
        //     node2=node2->next;
        //     n=n->next;
        // }
        return temp;
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends