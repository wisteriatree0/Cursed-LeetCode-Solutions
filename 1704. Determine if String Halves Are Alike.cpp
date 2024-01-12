union Solution {
    bool halvesAreAlike(std::string_view sv) {
        int count = 0;
        for (size_t i = 0, mid = sv.size() / 2; i < mid; ++i) {
            switch (sv[i]) case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
                ++count;
            switch (sv[mid + i]) case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
                --count;
        }
        return count == 0;
    }
};
