cmake_minimum_required(VERSION 3.24)
project(Code)

set(CMAKE_CXX_STANDARD 14)

include_directories("Edx/Advanced Data Structures")
include_directories("Edx/Introduction to Data Structures")

add_executable(Code
        .idea/Code.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        "Cisco Test/A.cpp"
        "Cisco Test/B.cpp"
        "Cisco Test/C.cpp"
        Code/.gitattributes
        Code/README.md
        "CodeForces/Codeforces Round #842 (Div. 2)/Greatest Convex.cpp"
        "CodeForces/Codeforces Round #843 (Div. 2)/A1 Gardener and the Capybaras (easy version).cpp"
        "CodeForces/Educational Codeforces Round 141 (Rated for Div. 2)/Make it Beautiful.cpp"
        "CodeForces/Educational Codeforces Round 141 (Rated for Div. 2)/Matrix of Differences.cpp"
        "CodeForces/Educational Codeforces Round 141 (Rated for Div. 2)/Yet Another Tournament.cpp"
        "CodeForces/Hello 2023/Least Prefix Sum.cpp"
        "CodeForces/Hello 2023/MKnez's ConstructiveForces Task.cpp"
        "CodeForces/Polynomial Round 2022 (Div. 1 + Div. 2, Rated, Prizes!)/Add Plus Minus Sign.cpp"
        "CodeForces/Extremely Round.cpp"
        "CodeForces/Hall of Fame.cpp"
        "CodeForces/Theatre Square.cpp"
        "Edx/Advanced Data Structures/addnodeh.cpp"
        "Edx/Advanced Data Structures/addnodet.cpp"
        "Edx/Advanced Data Structures/avl.cpp"
        "Edx/Advanced Data Structures/bst.h"
        "Edx/Advanced Data Structures/cpluspluslabs.h"
        "Edx/Advanced Data Structures/csvexport.cpp"
        "Edx/Advanced Data Structures/csvimport.cpp"
        "Edx/Advanced Data Structures/csvimport2.cpp"
        "Edx/Advanced Data Structures/queue.h"
        "Edx/Advanced Data Structures/stack.h"
        "Edx/Advanced Programming in C++/avgoflst.cpp"
        "Edx/Advanced Programming in C++/bmimetric2.cpp"
        "Edx/Advanced Programming in C++/bmimetricf.cpp"
        "Edx/Advanced Programming in C++/callcoster.cpp"
        "Edx/Advanced Programming in C++/cashregister.cpp"
        "Edx/Advanced Programming in C++/chartype.cpp"
        "Edx/Advanced Programming in C++/firstword.cpp"
        "Edx/Advanced Programming in C++/isleapyearf.cpp"
        "Edx/Advanced Programming in C++/maxabsinlst.cpp"
        "Edx/Advanced Programming in C++/maxinlst.cpp"
        "Edx/Advanced Programming in C++/remainingwords.cpp"
        "Edx/Advanced Programming in C++/stringsplitter.cpp"
        "Edx/Advanced Programming in C++/tempCodeRunnerFile.cpp"
        "Edx/Introduction to Data Structures/addone.cpp"
        "Edx/Introduction to Data Structures/bsearch.cpp"
        "Edx/Introduction to Data Structures/gcd.cpp"
        "Edx/Introduction to Data Structures/getdoubles.cpp"
        "Edx/Introduction to Data Structures/ispalindrome.cpp"
        "Edx/Introduction to Data Structures/lsearch.cpp"
        "Edx/Introduction to Data Structures/merge.cpp"
        "Edx/Introduction to Data Structures/mergesort.cpp"
        "Edx/Introduction to Data Structures/selection.cpp"
        "Edx/Introduction to Data Structures/showticket.h"
        "Edx/Introduction to Data Structures/showtickets.h"
        "Edx/Introduction to Data Structures/sportticket.h"
        "Edx/Introduction to Data Structures/swap.cpp"
        "Edx/Introduction to Data Structures/tempCodeRunnerFile.cpp"
        "Edx/Introduction to Data Structures/ticketsales.h"
        "Edx/Introduction to Programming in C++/Week2/Lab/hello.cpp"
        "Edx/Introduction to Programming in C++/Week2/Note/one_plus_one.cpp"
        "Edx/Introduction to Programming in C++/Week3/bmiimperial.cpp"
        "Edx/Introduction to Programming in C++/Week3/bmimetric.cpp"
        "Edx/Introduction to Programming in C++/Week3/coins.cpp"
        "Edx/Introduction to Programming in C++/Week3/counter.cpp"
        "Edx/Introduction to Programming in C++/week5/countoddeven.cpp"
        "Edx/Introduction to Programming in C++/week5/evennumbers.cpp"
        "Edx/Introduction to Programming in C++/week5/fibonacci.cpp"
        "Edx/Introduction to Programming in C++/week5/gradeclass.cpp"
        "Edx/Introduction to Programming in C++/week5/isleapyearc.cpp"
        "GOOGLE KICKSTART/2021/ROUND E/ShuffledAnagrams.cpp"
        ICPC/IndividualPlacementTest/A.cpp
        ICPC/IndividualPlacementTest/B.cpp
        ICPC/IndividualPlacementTest/C.cpp
        ICPC/IndividualPlacementTest/c_dfs.cpp
        ICPC/IndividualPlacementTest/D.cpp
        "JP morgan Test/AlmostEquvlentStrings.cpp"
        "JP morgan Test/FizzBuzz.cpp"
        "JP morgan Test/LongestEvenWord.cpp"
        "Kattis/Common Factors.cpp"
        Kattis/EyeofSauron.cpp
        Kattis/MrCodeFormatGrader.cpp
        "Leetcode/146 LRU Cache.cpp"
        "Leetcode/1658 Minimum Operations to Reduce X to Zero.cpp"
        "Leetcode/1703 Minimum Adjacent Swaps for K Consecutive Ones.cpp"
        "Leetcode/1750 Minimum Length of String After Deleting Similar.cpp"
        "Leetcode/1754 Largest Merge Of Two Strings.cpp"
        "Leetcode/1759 Count Number of Homogenous Substrings.cpp"
        "Leetcode/1764 Form Array by Concatenating Subarrays of Another Array.cpp"
        "Leetcode/1779. Find Nearest Point That Has the Same X or Y.cpp"
        "Leetcode/1785 Minimum Elements to Add to Form a Given Sum.cpp"
        "Leetcode/1799 Maximize Score After N Operations.cpp"
        "Leetcode/1801 Number of Orders in the Backlog.cpp"
        "Leetcode/1803 Count Pairs With XOR in a Range.cpp"
        "Leetcode/1806 Minimum Number of Operations to Reinitialize a Permutation.cpp"
        "Leetcode/1807 Evaluate the Bracket Pairs of a String.cpp"
        "Leetcode/1819 Number of Different Subsequences GCDs.cpp"
        "Leetcode/1827 Minimum Operations to Make the Array Increasing.cpp"
        "Leetcode/1945 Sum of Digits of String After Convert.cpp"
        "Leetcode/1971 Find if Path Exists in Graph.cpp"
        "Leetcode/2027 Minimum Moves to Convert String.cpp"
        "Leetcode/2032 Two Out of Three.cpp"
        "Leetcode/2037 Minimum Number of Moves to Seat Everyone.cpp"
        "Leetcode/2042 Check if Numbers Are Ascending in a Sentence.cpp"
        "Leetcode/2180 Count Integers With Even Digit Sum.cpp"
        "Leetcode/2185 Counting Words With a Given Prefix.cpp"
        "Leetcode/2283 Check if Number Has Equal Digit Count and Digit Value.cpp"
        "Leetcode/2293 Min Max Game.cpp"
        "Leetcode/2351 First Letter to Appear Twice.cpp"
        "Leetcode/25 Reverse Nodes in k-Group.cpp"
        "Leetcode/399 Evaluate Division (disjoint-set).cpp"
        "Leetcode/399 Evaluate Division.cpp"
        Leetcode/400nth-digit.cpp
        "Leetcode/753 Cracking the Safe.cpp"
        Luogu/[ABC153F]SilverFoxvsMonster.cpp
        Luogu/P1608·��ͳ��.cpp
        Luogu/test.cpp
        main.cpp
        model.cpp)

add_executable(2293 Min Max Game "Leetcode/2293 Min Max Game.cpp")
add_executable(A Parallel Projection "CodeForces/Codeforces Round #844 (Div. 1 + Div. 2, based on VK Cup 2022 - Elimination Round)/A Parallel Projection.cpp")
add_executable(1813 Sentence Similarity III "Leetcode/1813 Sentence Similarity III.cpp" "Leetcode/1813 Sentence Similarity III.cpp")
add_executable(1825 Finding MK Average "Leetcode/1825 Finding MK Average.cpp")