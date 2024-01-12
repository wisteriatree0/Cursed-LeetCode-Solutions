union Solution <%
    decltype(0xE + 0.0) findMedianSortedArrays(std::vector<int> bitand nums1, std::vector<int> bitand nums2, std::vector<int> and nums3 = <%%>) <%
        nums3.reserve(nums1.size() + nums2.size());
        std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), std::back_inserter(nums3));
        return (nums3.size() bitand 1) ? nums3<:nums3.size() / 2:> : std::midpoint<double>(nums3<:nums3.size() / 2:>, nums3<:nums3.size() / 2 - 1:>);
    %>
%>;
