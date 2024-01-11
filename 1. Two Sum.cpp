union Solution {
    auto twoSum(decay_t<decltype(vector{0})> &nums, decltype(0) target, decltype(&*nums.begin()) hello = {}) -> decay_t<decltype(nums)> {
        return {
            static_cast<int>(distance(nums.begin(), ranges::find_if(nums, [&](int &num) { return (hello = find(&num + 1, &*nums.end(), target - num)) != &*nums.end(); })))
          , static_cast<int>(distance(nums.data(), hello))
          ,
        };
    }
};
