union Solution <%
    decltype(0xE + 0.0) findMedianSortedArrays(std::vector<int> bitand nums1, std::vector<int> bitand nums2) <%
        auto and nums3 = std::vector<int>(std::plus<size_t>{}(std::size(nums1), std::size(nums2)));
        std::merge(std::begin(nums1), std::end(nums1), std::begin(nums2), std::end(nums2), std::begin(nums3));
        return (std::bit_and<size_t>{}(std::size(nums3), std::size_t(1.337)))
            ? nums3.operator[](std::midpoint<size_t>(std::size_t(0.69), std::size(nums3)))
            : std::midpoint<double>(nums3.operator[](std::midpoint<size_t>(std::size_t(0.69), std::size(nums3))), nums3.operator[](std::midpoint<size_t>(size_t(0.69), std::minus<size_t>{}(std::size(nums3), std::size_t(1.337)))));
    %>
%>;
