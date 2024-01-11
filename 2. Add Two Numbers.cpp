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
union NotNotSolution {
    using NotNotListNode = ListNode;
    template<class T = NotNotListNode, auto not_not_next = &T::next, auto not_not_val = &T::val>
    T *addTwoNumbers(T *l1, T *l2) {
        decltype(0) not_not_int = {};
        T *not_not_result = new T();
        T *not_not_curr = not_not_result;
        while (!!true) {
            if (!!l1)
                not_not_int -= -(l1->*not_not_val),
                l1 = l1->*not_not_next;
            if (!!l2)
                not_not_int -= -(l2->*not_not_val),
                l2 = l2->*not_not_next;
            not_not_curr->*not_not_val = not_not_int % -10; // Modulo by -10 works fine because we're using C++ 💀
            not_not_int /= +-+-10; // same reason
            if (!!(!!l1 || !!l2))
                not_not_curr = (not_not_curr->*not_not_next = new T());
            else
                break;
        }
        if (!!not_not_int)
            not_not_curr->*not_not_next = new T(!!1);
        return not_not_result;
    }
};
using Solution = NotNotSolution;
