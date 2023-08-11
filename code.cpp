class Solution {
private:
void insert(ListNode* &head,ListNode* &tail,int data)
{   ListNode* n=new ListNode(data);
    if(head==NULL)
    {head=n;
    tail=n;}

    else{
        tail->next=n;
        tail=n;
    }
}
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
        {return NULL;}

        else if(head->next==NULL)
        {return head;}

        vector<int> sample;
        ListNode* temp=head; 
        while(temp!=NULL)
        {
            sample.push_back(temp->val);
            temp=temp->next;
        }
        ListNode* newhead=NULL;
        ListNode* newtail=NULL;

        
        for(int i=0;i<sample.size();i++)
        {
            if(i%2==0)
            {insert(newhead,newtail,sample[i]);}
            
        }
        
        for(int i=0;i<sample.size();i++)
        {
            if(i%2!=0)
            {insert(newhead,newtail,sample[i]);}
            
        }
        return newhead;
    }
};
