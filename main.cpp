#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>


// #include "VectorUtils.hpp"
#include "../utils/TreeUtils.hpp"

#include "../utils/PrintUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto _no_sync_ = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};

void test1() {
    vector<int> v1{3, 9, 20};

    TreeNode *t1 = new TreeNode(v1);
    TreeNode *t20 = t1->findItem(20);
    t20->left = new TreeNode(15);
    t20->right = new TreeNode(7);
    cout << t1 << endl;
    cout << "2 ? " << Solution().minDepth(t1) << endl;
//    cout << " ? " << Solution().func() << endl;
//    cout << " ? " << Solution().func() << endl;
}

void test2() {

}

void test3() {

}