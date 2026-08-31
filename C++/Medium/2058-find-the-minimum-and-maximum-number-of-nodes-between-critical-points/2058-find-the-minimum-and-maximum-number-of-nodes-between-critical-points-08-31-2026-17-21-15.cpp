/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return {-1, -1};
        }

        ListNode* prev = head;
        ListNode* curr = head->next;
        
        int firstCriticalIndex = -1;
        int lastCriticalIndex = -1;
        int currentIndex = 1;
        int minDist = INT_MAX;
        
        while (curr->next != nullptr) {
            if ((curr->val > prev->val && curr->val > curr->next->val) || 
                (curr->val < prev->val && curr->val < curr->next->val)) {
                
                if (firstCriticalIndex == -1) {
                    firstCriticalIndex = currentIndex;
                } else {
                    minDist = min(minDist, currentIndex - lastCriticalIndex);
                }
                lastCriticalIndex = currentIndex;
            }
            
            // Move to the next set of nodes
            prev = curr;
            curr = curr->next;
            currentIndex++;
        }
    
        if (firstCriticalIndex == -1 || firstCriticalIndex == lastCriticalIndex) {
            return {-1, -1};
        }
        
        int maxDist = lastCriticalIndex - firstCriticalIndex;
        
        return {minDist, maxDist};
    }
};