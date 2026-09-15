class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        vector<int> stack;
        
        ListNode *temp = head;

        // Push
        while(temp != NULL)
        {
            stack.push_back(temp->val);
            temp = temp->next;
        }

        // Compare
        int top = stack.size() - 1;
        temp = head;

        while(temp != NULL)
        {
            if(temp->val != stack[top])
            {
                return false;
            }

            top--;
            temp = temp->next;
        }

        return true;
    }
};
