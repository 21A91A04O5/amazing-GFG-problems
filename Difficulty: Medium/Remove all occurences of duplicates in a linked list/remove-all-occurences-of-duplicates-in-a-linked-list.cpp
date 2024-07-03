//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
// User function Template for C++

/* Linked List node structure

struct Node {
    int data;
    struct Node *next;
};

*/

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        if(head==NULL || head->next==NULL) return head;
        struct Node* t=head;
        struct Node* temp=head;
        struct Node* x=NULL;
        int c=0,a=head->data;
        while(temp!=NULL){
            if(temp->data==a)  c++;
            else{
                if(c==1){
                    t->data=a;
                    x=t;
                    t=t->next;
                }
                a=temp->data;
                c=1;
            }
            temp=temp->next;
        }
        if(c==1){
            t->data=a;
            t->next=NULL;
        }
        else{
            if(x==NULL) return NULL;
            else x->next=NULL;
        }
        return head;
    }
};

//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;

        cin >> N;

        Node *head = NULL;
        Node *temp = head;

        for (int i = 0; i < N; i++) {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Solution ob;
        head = ob.removeAllDuplicates(head);
        printList(head);

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends