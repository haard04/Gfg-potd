class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        set<int>st;
        while(head1 != NULL){
            st.insert(head1->data);
            head1 = head1->next;
        }
        while(head2 != NULL){
            st.insert(head2->data);
            head2 = head2->next;
        }
         struct Node* head = new Node(-1);
         struct Node* ans = head;
        for(auto& it:st){
            Node* temp = new Node(it);
            head->next = temp;
            head = head->next;
        }
        
        return ans->next;
    }
};