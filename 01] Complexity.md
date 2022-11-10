# কম্প্লেক্সিটি

##  থেওরি

- [x] কেন আমাদের প্রোগ্রামের কম্প্লেক্সিট জানা প্রয়োজন ?

একটি সমস্যার সমাধানের জন্য একাধিক অ্যালগরিদম থাকতে পারে. এত অ্যালগোরিদমের মাঝে,

* আমরা কখন কোন অ্যালগরিদম ব্যবহার করব
* নির্দিষ্ট সমস্যাটি সমাধানের জন্য কোন অ্যালগরিদম সবচেয়ে ভালো হবে.
* কেন ভালো হবে, এসব জানত একটা অ্যালগোরিদমের টাইম এন্ড স্পেস কম্প্লেক্সিটি জানা প্রয়োজন.
* কম্প্লেক্সিটি মাধ্যমে প্রোগ্রাম দক্ষতার উপর ভিত্তি করে দুটি ভিন্ন অ্যালগরিদমের মধ্যে স্পষ্টভাবে পার্থক্য করতে পারে।

একটা উদাহরণ দেওয়া যাক, ধরুন আপনার বন্ধু 1 থেকে 1000 এর মধ্যে একটি সংখ্যা বেছে নিয়েছে এবং সে আপনাকে নম্বরটি অনুমান করতে বলেছে। যদি আপনার অনুমান সঠিক হয় তবে তিনি আপনাকে বলবেন যে এটি সঠিক, অন্যথায়, যদি আপনার অনুমান তার সংখ্যার চেয়ে বড় হয় তবে তিনি আপনাকে বলবেন যে এটি 'খুব বড় এবং যদি এটি তার সংখ্যার চেয়ে ছোট হয় তবে তিনি আপনাকে বলবেন যে এটি' খুব ছোট. এখানে কিছু উপায় আছে যার মাধ্যমে আমরা সংখ্যা খুঁজে পেতে পারি।

কেইস 1 : আমরা 1 থেকে 1000 পর্যন্ত প্রতিটি সংখ্যা অনুমান করতে পারি এবং এটি সঠিক কিনা তা দেখতে পারি।

কেইস 2 : আমরা মাঝের সংখ্যাটি বাছাই করতে পারি, যদি সে 'খুব বড়' বলে তবে আমরা নিশ্চিতভাবে জানি যে সংখ্যাটি বাম দিকে রয়েছে তাই আমরা ডান দিকটি বাতিল করতে পারি, একইভাবে যদি তিনি বলেন 'খুব ছোট' আমরা বাম দিকটি বাতিল করতে পারি। আমরা একই প্রক্রিয়া পুনরাবৃত্তি করতে পারি যতক্ষণ না তিনি বলছেন এটি সঠিক।

এখানে, ২য় কেইস/পথটি আসলে প্রথম পথের চেয়ে ভালো। খারপ কেইস/পথটি, আমরা সঠিক সংখ্যা পাওয়ার আগে 1ম উপায়টি 1000টি অনুমান করবে (যদি সংখ্যাটি 1000 হয়). যখন 2য় উপায়টি সবচেয়ে খারাপ কেইস/ক্ষেত্রে শুধুমাত্র 10টি অনুমান গ্রহণ করবে (এর কারণ প্রতিটি অনুমানে আমরা একটি অর্ধেক বাদ দেই)।

তাই প্রথম কেইস/ক্ষেত্রে কম্প্লেক্সিটি হল O(n) এবং দ্বিতীয় কেইস/ক্ষেত্রে হল O(logn)।

আমরা উপরের উদাহরণ থেকে দেখেছি একই সমস্যা সমাধানের জন্য একাধিক পন্থা থাকতে পারে। প্রতিটি পদ্ধতির জন্য অ্যালগরিদম সময় নেয়, তাই এমন একটি উপায় থাকতে হবে যার মাধ্যমে আমরা এই বিভিন্ন পদ্ধতির (অ্যালগরিদম) পার্থক্য করতে পারি এবং সবচেয়ে কার্যকরী একটি বেছে নিতে পারি। ঠিক এই কারণেই টাইম কম্প্লেক্সিট ধারণাটি চালু হয়েছিল।

নোট : টাইম কমপ্লেক্সিটি সত্যিই একটি অ্যালগরিদম চালানোর জন্য নেওয়া প্রকৃত সময় পরিমাপ করে না, এটা কিছুটা নির্ভর করে প্রোগ্রামিং ল্যাঙ্গুয়েজ , প্রচেসসিং পাওয়ার ইত্যাদি. এটি অ্যালগরিদম এবং ইনপুটগুলির পরিপ্রেক্ষিতে  এটি একটি অ্যালগরিদমের এক্সিকিউশন টাইম গণনা করে৷

প্রোগ্রামের টাইম-কমপ্লেক্সিট, রানং-টাইম, এক্সিকিউশন টাইম :

টাইম কমপ্লেক্সিট অ্যালগরিদম রিলেটেড একটি সম্পূর্ণ থেওরিথিকাল ধারণা, আর রানিং টাইম হল একটি কোড চালানোর সময় লাগে, এটা থেওরিথিকাল ধারণা না. দুটি অ্যালগরিদমের সেইম টাইম কমপ্লেক্সিট থাকতে পারে,O(n~2), কিন্তু একটি অন্যটির তুলনায় রানিং টাইম দ্বিগুণ সময় নিতে পারে|

রানিং টাইম হল আপনার প্রোগ্রামটি শেষ হতে কত সময় লাগে. এক্সিকিউশন টাইম হল সেই সময় যেটা আপনার প্রোগ্রাম এক্সিকিউট করতে লাগে.

যেমনটি আমরা জানি একটি অ্যালগরিদমের রানিং টাইম বিভিন্ন কারণের উপর নির্ভর করতে পারে যেমন কম্পিউটারের আর্কিটেকচার (32 বা 64-বিট), এক বা একাধিক প্রসেসর, পড়ার এবং লেখার গতি, মেশিনের কনফিগারেশন, ইনপুট ইত্যাদি।

কিন্তু সহজে বুজার জন্য, আমরা শুধু একটি পরিবর্তনশীল হিসেবে ইনপুট নিতে যাচ্ছি এবং বাকি ফ্যাক্টরগুলোকে স্থির রাখব। সিংএল প্রসেসর, 32 বিট,  আমরা আমাদের মেশিনে অনুমান করতে যাচ্ছি , সেকুএন্তিয়াল এক্সেকিসিওন, গাণিতিক এবং যৌক্তিক ক্রিয়াকলাপের জন্য 1 ইউনিট সময় নেয়। 

```c++
sum(list,size of list):			
    total=0			—-> T(n) = 1
    for i->0 to size of list	—-> T(n) = n + 1
	total+=list[i]		—-> T(n) = n
    return total		—-> T(n) = 1
```

তাই উপরের প্রোগ্রামের মোট রানটাইম হল T(n) = 1 + 2(n+1) + 2n + 1 = 4n+4  (লিনিয়ার)

টাইম কমপ্লেক্সিটর গণনা করার জন্য কিছু সাধারণ নিয়ম -   

* একটি খুব গুরুত্বপূর্ণ বিষয় হল যে আমরা সবসময় অনুমান করি যে ইনপুট আকার খুব বড়।
* ধ্রুবক মালটিপিকেশান বাদ দিন।
* ড্রপ লোয়ার অর্ডার ট্র্যার্মস.
* গণনা কর  একটি প্রোগ্রামের রানিং টাইম =  একটি প্রোগ্রামের সকল ফেগমেন্টের রানিং টাইম

উদাহরণ 01:

প্রথমত আমরা প্রোগ্রামটিকে 2টি খণ্ডে(ফেগমেন্টের) বিভক্ত করতে পারি . এবং দ্বিতীয় খণ্ডটি হল দ্বিতীয় লুপ (নেস্টেড লুপ)।. আমাদের চূড়ান্ত উত্তর হবে উভয় খণ্ডের সমষ্টি। যেমন আমরা জানি সিমপ্লল স্টেটমেন্টস যেমন ডিকলারেশন, অ্যাসাইনমেন্ট, গাণিতিক/লজিক্যাল অপারেশনের জন্য চলমান সময় হল O(1)। তাই প্রথম খণ্ডের টাইম কমপ্লেক্সিট হবে O(n), এবং লুপের ভিতরে স্টেটমেন্টস গুলির টাইম কমপ্লেক্সিটর হল O(1)। যেখানে দ্বিতীয় খণ্ডের টাইম কমপ্লেক্সিটর হবে O(n^2)। প্রোগ্রামের টাইম কমপ্লেক্সিট = O(n) + O(n^2) = O(n^2)

```c++
//avoid this loop
for (int i=0;i<n;i++)
{
    int a=5; // avoid
    a++; // avoid
}

for (int i=0;i<n;i++)
{
   for(int j=0;j<n;j++)
   {
     int b=5;
     b++;
   }
}
```

উদাহরণ 02:

ধরুন আমরা 2 জন সাক্ষাত্কারকারীকে (A এবং B) জিজ্ঞাসা করি  একটি সংখ্যা (N >= 2) মৌলিক কিনা তা সনাক্ত করতে একটি প্রোগ্রাম লিখতে। আপাতত, অনুমান করা যাক যে উভয় কোডই সঠিক। এখন, B দাবি করেছে যে তার কোড অনেক ভালো কারণ N প্রাইম কিনা তা পরীক্ষা করতে অনেক কম সময় লাগে

আপনি দেখতে পাচ্ছেন যে বি-এর প্রোগ্রামটি উল্লেখযোগ্যভাবে দ্রুততর যদিও সমস্যা সমাধানের উভয় পদ্ধতিই সঠিক। প্রথম ক্ষেত্রে, নেওয়া সময় সরাসরি N-এর সমানুপাতিক, যেখানে দ্বিতীয় ক্ষেত্রে এটি সরাসরি N-এর বর্গমূলের সমানুপাতিক।

সময় নিয়ে উদাহরণ দেখা যাক : 

```
N = 1000033 ( Prime number )   
Time taken by A's program = 1 ms * number of divisions  
                          = 1 ms * 1000033  
                          = approximately 1000 seconds or 16.7 mins.   

Time taken by B's program = 1ms * number of divisions   
                          = 1ms * square root of 1000033  
                          = approximately 1000ms = 1 second  
```			  
A :

```c++
i = 2 
 while i < N
   if N is divisible by i
      N is not prime
   add 1 to i   
```

B :

```c++
i = 2
while i <= square root of N
  if N is divisible by i 
    N is not prime
  add 1 to i
```

টাইম কমপ্লেক্সিটর এবং স্পেস কমপ্লেক্সিটর মধ্যে পার্থক্য:

| টাইম কমপ্লেক্সিটর	| স্পেস কমপ্লেক্সিট     |
|-----------------------|----------------------|
টাইম কমপ্লেক্সিটর হল ইনপুটের দৈর্ঘ্যের একটি ফাংশন হিসাবে চালানোর জন্য একটি অ্যালগরিদম/প্রোগ্রাম দ্বারা নেওয়া সময়। | স্পেস কমপ্লেক্সিট হল একটি অ্যালগরিদম চালানোর জন্য ব্যবহৃত মেমরির মোট পরিমাণ। |
| ইনপুট আকারের উপর নির্ভর করে।.	| বেশিরভাগ auxillary সাইজ উপর নির্ভর করে। (অর্থাৎ ব্যবহৃত অতিরিক্ত স্পেস |
| আধুনিক হার্ডওয়্যারের জন্য, আপনার টাইম কমপ্লেক্সিটর কমানো ওনাকে গুরুত্বপূর্ণ।	| আধুনিক হার্ডওয়্যারের জন্য, টাইম কমপ্লেক্সিটর তুলনায় আপনার স্পেস কমপ্লেক্সিট কমানো কম গুরুত্বপূর্ণ। |

- [x] টাইম কমপ্লেক্সিটি কি?

 টাইম কমপ্লেক্সিটি হল ইনপুটের দৈর্ঘ্যের একটি ফাংশন হিসাবে চালানোর জন্য একটি অ্যালগরিদম/প্রোগ্রাম দ্বারা নেওয়া সময়।

যেমন এক লক্ষ সংখ্যায় যোগ করতে আমাদের কয়েকদিন সময় লাগবে, সেখানে কম্পিউটার খুব দ্রুত এবং নির্ভুলভাবে কয়েক সেকেন্ডে কাজটি করে ফেলতে পারে. তাই কাজটি করার জন্য কম্পিউটারের প্রোগ্রামের কতটুকু সময় লাগে সেটাই টাইম কমপ্লেক্সিটি.

- [x] স্পেস কম্প্লেক্সিটি কি?

কম্পিউটারে নির্দিষ্ট সীমা পর্যন্ত মেমোরি রয়েছে. নির্দিষ্ট তথ্য রাখার জন্য ধারণ ক্ষমতা রয়েছে. তাই প্রোগ্রামের লেখার সময় আমাদের জানা প্রয়োজন প্রগ্রামে কতটুক মেমোরি নিবে. আমরা যদি টাইম এন্ড স্পেস কম্প্লেক্সিটি হিসাব-নিকাশ বুঝি, তাহলে অ্যালগরিদম বা প্রোগ্রাম দেখে আমরা সেটাই বিশ্লেষণ করে সহজেই বলে দিতে পারব. এজন্য প্রোগ্রামারের চেষ্টা থাকা উচিত তার প্রোগ্রামের টাইম এবং স্পেস কম্প্লেক্সিটি দুইটাতে যাতে কম থাকে.

## এনালাইসিস কম্প্লেক্সিটি

- [ ] কনস্ট্যান্ট টাইম কমপ্লেক্সিটি O(1): একটি ফাংশনের টাইম কমপ্লেক্সিটি (অথবা সেট অফ স্টেটমেন্ট) O(1) হিসাবে বিবেচিত হয় যদি এতে একটি লুপ, রিকার্সন এবং অন্য কোন নন কনস্ট্যান্ট টাইম ফাংশনে কল না থাকে। অর্থাৎ নন-রিকারসিভ এবং নন-লুপ স্টেটমেন্টের সেট. 

```👉 Constant Time Complexity O(1) : The time complexity of a function (or set of statements) is considered as O(1) if it doesn’t contain a loop, recursion, and call to any other non-constant time function. i.e. set of non-recursive and non-loop statements.```

- [ ] লিনিয়ার টাইম কমপ্লেক্সিটি :  একটি লুপের টাইম কমপ্লেক্সিট O(n) হিসাবে বিবেচিত হয় যদি লুপ ভেরিয়েবলগুলি একটি কনস্ট্যান্ট পরিমাণ দ্বারা বৃদ্ধি/হ্রাস করা হয়।. 

```c++
/*
⬅️ Linear Time Complexity O(n) : The Time Complexity of a loop is considered as O(n) if the loop variables are 
incremented/decremented by a constant amount. */

// Here c is a positive integer constant
for (int i = 1; i <= n; i += c) {
	// some O(1) expressions
}

for (int i = n; i > 0; i -= c) {
	// some O(1) expressions
}

```

- [ ] Quadratic টাইম কমপ্লেক্সিট O(n^c): টাইম কমপ্লেক্সিট একটি অ্যালগরিদম হিসাবে সংজ্ঞায়িত করা হয় যার পারফরম্যান্স সরাসরি ইনপুট ডেটার বর্গ আকারের সমানুপাতিক, যেমন নেস্টেড লুপগুলিতে এটি ইনার স্টেটমেন্ট এক্সিকিউশন করা হয় তার সংখ্যার সমান। উদাহরণ: ইলেকশন শট এবং ইনসার্সন শট ক্ষেত্রে O(n^2) টাইম কমপ্লেক্সিট রয়েছে।
 
```c++
/*
⬅️ Quadratic Time Complexity O(n^c): The time complexity is defined as an algorithm whose performance is directly
proportional to the squared size of the input data, as in nested loops it is equal to the number of times the 
innermost statement is executed. Example:  Selection sort and Insertion Sort have O(n^2) time complexity. */

for (int i = 1; i <= n; i += c) {
    for (int j = 1; j <= n; j += c) {
	    // some O(1) expressions
    }
}

for (int i = n; i > 0; i -= c) {
     for (int j = i + 1; j <= n; j += c) {
     	  // some O(1) expressions
     }
}
```

- [ ] লগারিদমিক টাইম কমপ্লেক্সিট O(Log n): একটি লুপের টাইম কমপ্লেক্সিট O(Logn) হিসাবে বিবেচনা করা হয় যদি লুপ ভেরিয়েবলগুলিকে একটি কনস্ট্যান্ট পরিমাণ দ্বারা ভাগ/গুণ করা হয়। এবং রিকার্সিভ ফাংশনে রিকার্সিভ কলের জন্যও। উদাহরণ: বাইনারি সার্চ (ইটারেটিভ ইম্প্লেমেন্টেশন) এর O(Logn) টাইম কমপ্লেক্সিট রয়েছে।

```c++
/*
⬅️ Logarithmic Time Complexity O(Log n): The time Complexity of a loop is considered as O(Logn) if the loop variables
are divided/multiplied by a constant amount. And also for recursive calls in the recursive function. Example: Binary 
Search(refer iterative implementation) has O(Logn) time complexity. */

for (int i = 1; i <= n; i *= c) {
	// some O(1) expressions
}
for (int i = n; i > 0; i /= c) {
	// some O(1) expressions
}

or

// Recursive function
void recurse(n)
{
     if (n == 0) return;
     else {
	// some O(1) expressions
     }
     recurse(n - 1);
}

```

- [ ] লগারিদমিক টাইম কমপ্লেক্সিট O(Log Log n): একটি লুপের টাইম কমপ্লেক্সিটে O(LogLogn) হিসাবে বিবেচনা করা হয় যদি লুপ ভেরিয়েবলগুলি একটি ধ্রুবক পরিমাণ দ্বারা দ্রুতগতিতে হ্রাস/বৃদ্ধি করা হয়।

```c++
/*
⬅️ Logarithmic Time Complexity O(Log Log n): The Time Complexity of a loop is considered as O(LogLogn) if the loop
variables are reduced/increased exponentially by a constant amount. */

// Here c is a constant greater than 1
for (int i = 2; i <= n; i = pow(i, c)) {
	// some O(1) expressions
}
// Here fun is sqrt or cuberoot or any other constant root
for (int i = n; i > 1; i = fun(i)) {
	// some O(1) expressions
}
```

![image](https://user-images.githubusercontent.com/59710234/197229031-a22b9381-5d49-417e-bbe3-3b6d3b4b4316.png)


টাইম কমপ্লেক্সিটর প্রকারভেদ :

```
* O(1)	     - Constant Time Complexity	        Example: Sum of two numbers.  
* O(logn)    - Logarithmic Time Complexity	Example: Finding an element in a sorted array by using binary search.  
* O(n)	     - Linear Time Complexity	        Example: Finding the sum of an array of size n.  
* O(n logn)  - Log-Linear Time Complexity	Example: Sorting the array using merge sort.  
* O(n^2)	     - Quadratic Time Complexity	Example: Finding the sum of every pair of elements in an array.  
* O(2^n)      - Exponential Time Complexity	Example: Finding all the subsets.  
* O(n!)      - Factorial Time Complexity	Example: Finding all the permutations of a given array.  
```

<img src="https://user-images.githubusercontent.com/59710234/197320260-c3aa6390-9120-4517-a90e-b5b340ff96a3.png" height="300" width="600" >


## কিছু উদাহরণ

01] 

এখানে n1 ও n2 ভেরিয়েবলের যে কোন মানের ক্ষেত্রে কম্পিউটারের উপরে চারটি অপারেশন করবে, (একটি যোক আর তিনটি অ্যাসাইনমেন্ট অপারেশন). এখানে যে কোন ইনপুটের ক্ষেত্রেই আমাদের প্রোগ্রামের অপারেশনের সংখ্যা ধ্রুবক বা কনস্ট্যান্ট| তাহলে আমাদের প্রগ্রামে কম্প্লেক্সিটি হবে O(1). 

```c++
int main(){
    int n1 = 10;
    int n2 = 20;
    int result = n1 + n2;
    return 0;
}
```

02]

আমরা 1 থেকে n পর্যন্ত প্রতিটি পূর্ণ সংখ্যা যোগ করব, এটি দুই ভাবে করা যায়. 

* ধারার যোগফল সূত্র ব্যবহার করে : এখানে যে কোন মানের n এর জন্য একটি যোক, একটি গুণ, একটি ভাগ, একটি অ্যাসাইনমেন্ট অপারেশন করছে, তাই এক্ষেত্রে প্রথমে কম্প্লেক্সিটি হবে O(1). 

```c++
int main(){
    int n = 10;
    int result = n * (n + 1) /2;
    return 0;
}
```

* লুপ এর সাহায্যে , এখানে n এর মান যত ততটুকু এসাইনমেন্ট অপারেশন হবে , সেই সঙ্গে n সংখ্যক তুলনা কম্পোজিশন অপারেশন চলবে (i <= n). n = 10 হলে, তাহলেও লুপ চলবে 10 বার এবং দশবার result = result + i স্টেটমেন্ট চলবে তাহল, তাহলে 10 টি যোক, 10 টি অ্যাসাইনমেন্ট অপারেশন হবে. সঙ্গে 10 টি কম্পারিজন অপারেটর হবে. তাহলে এই প্রোগ্রামের অপারেশনের সংখ্যা n এর মানে সমানুপাতিক,এক্ষেত্রে প্রোগ্রামটি কম্প্লিসিটি হবে অর্ডার O(n). 

```c++
int main(){
    for(int i = 1; i <= n; i++){
        result = result + i;
    }
    return 0;
}
```

03]

এবার আসি স্পেস কম্প্লেক্সিটি নিয়ে, ধরা যাক আমাদের একটি প্রোগ্রাম লিখতে হবে যেখানে একটি পূর্ণ সংখ্যা জোড় না বিজোড় সেটি বের করতে হবে. (n <= 0 <= 100).

নিচের প্রোগ্রামটি স্পেস এক্সপ্রেস কম্প্লেক্সিটি হবে O(1).  স্পেস কম্প্লেক্সিটি সাথে ভেরিয়েবল সাথে একটা সম্পর্ক রয়েছে. যখন আমরা কোনো ভেরিয়েবল ইউজ করি. তখন সেটি কম্পিউটার মেমোরি ব্যবহার করে. তাই কতটুকু মেমোরি/ভেরিয়েবল ব্যবহার হলো তার ওপর নির্ভর করে প্রোগ্রামেরে স্পেস কম্প্লেক্সিট.  এখানে যে কোন ইনপুটের n ক্ষেত্রেই আমাদের প্রোগ্রামের মেমোরি ব্যবহার করে ধ্রুবক বা কনস্ট্যান্ট| 

```c++
int main(){
    if(n%2 == 0 )
       printf("Even Number");
    else printf("Odd Number");
}
```

এখানে even নামে একটি আরে ব্যবহার করা হলো এবং  লুপ  চালিয়ে ইকুয়াল i = 0 থেকে i = 100 পর্যন্ত সকল উপাদান এর মান 0 করে দেয়া হলো. তারপর আরেকটি লুপ এর সাহায্যে 0,2,4,... even i এর জন্য মান গুলো 1 করে দেওয়া হল. এই প্রোগ্রামের টাইম এবং স্পেস কম্প্লেক্সিটি দুইটা O(n) কারণ আমরা n সাইজের একটি আরে ব্যবহার. যা মেমোরি n সাইজ দখল করবে.  অর্থাৎ, আরে উপাদানের সংখ্যা n এর মানে সমানুপাতিক. 

```c++
int main(){
    int even[101];
    
    for(int i = 0; i < 101; i++){
        even[i] = 0;
    }
    
    for(int i = 0; i < 101; i+=2){
        even[i] = 1;
    }
    
    if(even[n]) printf("Even");
    else printf("Odd");
    
    return 0;
}
```

04]

এখানে n মান বাড়ার সাথে সাথে count মান বাড়ছে. নিচে দেখতে পাচ্ছি count হচ্ছে n এর বর্গ অর্থাৎ O(n^2). তাহলে প্রোগ্রামের টাইম কমপ্লেক্সিটি O(n^2).

n = 1 then count = 1  
n = 2 then count = 4  
n = 3 then count = 9  

```c++
int main(){
    for(int i = 1; i <= n; i++){
       for(int j = 1; j <= n; j++){
          count = count + i;
       }
    }
    return 0;
}
```

05]

তিনটি লুপ নেস্টেড অবস্থায় আছে , তাহলে কম্প্লেক্সিটি হবে O(n^3)

```c++
int main(){
    for(int i = 1; i <= n; i++){
       for(int j = 1; j <= n; j++){
          for(int k = 1; k <= n; k++){
              count = count + 1;
          }
       }
    }
    return 0;
}
```

06]

আমরা খেয়াল করলে দেখব এর কম্প্লেক্সিটি O(n^2) + O(n). একই আমরা O(n^2) বলতে পারি, কারণ O(n), O(n^2) তুলনায় নগণ্য. তাই একে গণ্য করা হবে না.

```c++
int main(){
    for(int i = 1; i <= n; i++){
       for(int j = 1; j <= n; j++){
          count = count + 1;
       }
    }
    
    for(int i = 1; i <= n; i++){
        count = count + 1;
    }
    return 0;
}
```

07]

দেখা যাক কতবার count++ চলবে।  

   যখন i = 0, এটি 0 বার চলবে।.   
   যখন i = 1, এটি 1 বার চলবে।.    
   যখন i = 2, এটি 2 বার চলবে।  

![image](https://user-images.githubusercontent.com/59710234/157404103-35e2c191-c831-4481-b4b0-1978046e09da.png)

```c++
int count = 0;
for (int i = 0; i < N; i++) 
    for (int j = 0; j < i; j++) 
        count++;
```

08]

এটি একটি ট্রিকি কেস. প্রথম দেখায়, মনে হচ্ছে কমপ্লেক্সিটি হল O(N*logN)। j লুপের জন্য N এবং i লুপের জন্য logN। কিন্তু এটি ভুল। দেখা যাক কেন.

![image](https://user-images.githubusercontent.com/59710234/157404239-706efd09-3ff7-49be-9190-bbb9bdd17372.png)


= a / 1-r (a = first term, r = comman ratio)  
= 1 / 1 - ½  
= 1 / ½  
= 2  

N + N/2 + N/4 + N/8 + ......  
= N ( 1 + 1/2 + 1/4 + 1/8 + .....)  
= N * 2  

```c++
int count = 0;
for (int i = N; i > 0; i /= 2) 
    for (int j = 0; j < i; j++) 
        count++;
```

09]

i = 1  তখন p = 0 + 1 = 1  
i = 2  তখন p = 1 + 2 = 3  
i = 3  তখন p =  1 + 2 + 3 = 6  
:  
:  
i = k  তখন p = 1 + 2 + 3 + ... + k  

অনুমান করুন p > n লুপ স্টপ হবে;  
  
p > n  
= k*(k+1)/2 > n [ p = k*(k+1) / 2 ]  
= k^2 + k > 2*n  
= k^2 > n  
= k > root(n)  

তাই টাইম কমপ্লেক্সিটি O(root(n) )  

```c++
int p = 0;
for (int i = 1; p < n; i ++) 
    p = p + i;
```

10]

দেখা যাক কতবার count++ চলবে  

   যখন i = 0, রান হয়n N টাইমস.  
   যখন i = 1, রান হয় N-1 টাইমস.   
   যখন i = 2, রান হয় N-2 টাইমস and so on.  
   
উপরের কোডটি মোট সংখ্যায় রান করে :

    = N + (N – 1) + (N – 2) + … 1 + 0   
    = N * (N + 1) / 2   
    = 1/2 * N^2 + 1/2 * N   
    O(N^2) টাইমস.  


```c++
int a = 0;
for (i = 0; i < N; i++) {
    for (j = N; j > i; j--) {
        a = a + i + j;
    }
}
```

11]

এখানে উদাহরণ নেওয়া যাক :  
    for n = 16, j = 2, 4, 8, 16   
    for n = 32, j = 2, 4, 8, 16, 32    
    So, j রান হয় O(log n) স্টেপস.   
    
i রান হয় n/2 স্টেপস. সুতরাং টোটাল স্টেপ = O(n/ 2 * log (n)) = O(n*logn)   

```c++
int i, j, k = 0;
for (i = n / 2; i <= n; i++) {
    for (j = 2; j <= n; j = j * 2) {
        k = k + n / 2;
    }
}
```


12]

আমাদের সবচেয়ে ছোট x খুঁজে বের করতে হবে যেটা N / 2^x [ x = 0,1,2,3,...]  

x = log(N)  

for n = 16, i = 16, 8, 4, 2 , 1  

So, total steps = O(log N)  

[N.T : If i/=3 , log base is 3]  

```c++
int a = 0, i = N;
while (i > 0) {
    a += i;
    i /= 2;
}
```

13]

i <= sqrt(n) we can write i * i = n  

if n = 16 যখন i = 2, 3, .. 4 times .সুতরাং টাইম কমপ্লেক্সিটি হয: O(sqrt{n})  

```c++
bool isPrime(int n)
{
    // base case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++) // ----> [ root(n) - 2 ] times
        if (n % i == 0)
            return false;
 
    return true;
}
```

14]

প্রথম লুপ = n+1/2 টাইমস  [n/2.....n]  

দ্বিতীয় লুপ = n+1/2 টাইমস [1......n/2]  

তৃতীয় লুপ = log n টাইমস [we know k*=2 or k/=2 --> log n times]  

মোট সময় = n/2 * n/2 * log2  = n^2/2 * log2   

সুতরাং টাইম কমপ্লেক্সিটি হয  : O(n^2 log2)   

```c++
int i,j,k;
for(int i=n/2;i<=n;i++)
    for(j=1;j<=n/2;j++)
        for(int k=1;k<=n;k=k*2)
           printf("Hello")
```

15]

| iteartion | it 1  | it 2  | it 3  | it n    |
|---|-------|-------|-------|---------|
| i | 1     | 2     | 3 ... | n     |
| j | 1     | 2     | 3 ... | n times |
| k | 1*100 | 2*100 | 3*100 |... n*100 times |


Total Times = 1*100 + 2*100 + 3*100 + ... + n*100   
            = 100(1 + 2 + 3 + ... + n)   
            = 100 * n*(n+1)/2   
            
সুতরাং টাইম কমপ্লেক্সিটি হয  : O(n^2)   

```c++
int i,j,k;
for(int i=1;i<=n;i++)
    for(j=1;j<=i;j++)
        for(int k=1;k<=100;k++)
           printf("Hello")
```

16]

![image](https://user-images.githubusercontent.com/59710234/171729062-245d743f-df43-45f6-991c-a9d26f98a4e3.png)

for n > 1:  
T(n) = T(n-1) + T(n-2) + 4 (1 কম্পারিজন, 2 সাবট্রাকশন্স, 1 আড্ডিশন)  

Let’s say c = 4; T(n) = T(n-1) + T(n-2) + c  
   
রিকার্সিভ পদ্ধতিতে বা 0 থেকে n পর্যন্ত প্রতিটি মানকে দুটি ফাংশন ডাকা হয় (বেস কেস বাদে)।

উদাহরণ স্বরূপ, fib(6) is calling fib(5) and fib(4). তাই রিকার্সিভ পদ্ধতির টাইম কমপ্লেক্সিটি O(2^n).   

```c++
int fib(int n){
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
```

17]  

T(n) = T(n-1) + 1   

সুতরাং,রেকারেন্স রেলেশন হলো :  

```
                { 1               n = 0  
        T(n) =  {  
                { T(n-1) +  1     n > 0  
                
                T(3)  ------------------- 1  
               /    \ 
              3     T(2) ---------------- 1  
                   /     \
                  2      T(1) ----------- 1  
                        /    \
                       1     T(0) ------- 1  
                               |
                               x
   
 ``` 
যদি n = 3 তারপর (n + 1) কলিং হয়. সুতরাং টাইম কমপ্লেক্সিটি হয  O(n)  

```c++
void Test(int n){ --------------------- T(n)
    if (n > 0) { 
       printf("%d ",i); --------------- 1
    }    
    Test(n-1) ------------------------- T(n-1)   
}
```

18]

T(n) = T(n-1) + 2n + 2  
     = T(n-1) + n  

সুতরাং,রেকারেন্স রেলেশন হলো : 

```
                { 1               n = 0  
        T(n) =  {    
                { T(n-1) +  n     n > 0  
                
                T(n)
               /    \ 
              n   T(n-1)
                   /     \
                 (n-1)  T(n-2)
                        /     \
                      (n-2)  T(n-3)
                                 \
                                  \
                                 T(2)
                                /   \
                               2  T(1)
                                   /   \
                                  1  T(0)
                                      |
                                      x
   
```  
n + (n-1) + (n-3) .... 2 + 1      
= [ n + (n-1) + (n-2) + 2 + 1 ]  
= (n*(n+1))/2  
   
সুতরাং টাইম কমপ্লেক্সিটি হয  O(n^2)  

```c++
void Test(int n){ --------------------- T(n)
    if (n > 0) { ---------------------- 1
       for (int i = 1; j <= n; i++) --- n+1
           printf("%d ",i); ----------- n
           
       Test(n-1) ---------------------- T(n-1)  
    }   
}
```

19]

T(n) = T(n-1) + log n   

সুতরাং,রেকারেন্স রেলেশন হলো :  

```
                { 1                n = 0
        T(n) =  {
                { T(n-1) + log n   n > 0
                
                T(n)
               /    \ 
            log n   T(n-1)
                   /     \
               log(n-1)  T(n-2)
                        /     \
                    log(n-2)  T(n-3)
                                 \
                                  \
                                 T(2)
                                /   \
                             log 2  T(1)
                                   /   \
                                log 1  T(0)
                                        |
                                        x
 ```  
  
log n + log (n-1) + log(n-3) .... log 2 + log 1      
= log [ n * (n-1) * (n-2) * 2 * 1 ]  
= log n!  
   
সুতরাং টাইম কমপ্লেক্সিটি হয O(n log n)  


```c++
void Test(int n){ --------------------- T(n)
    if (n > 0) { ---------------------- 1
       for (int i = 1; j <= n; i*=2) 
           printf("%d ",i); ----------- log n
           
       Test(n-1) ---------------------- T(n-1)  
    }   
}
```

20]

i = 1, j = 1, n = 5, # hello 4 বার প্রিন্ট হয়
i = 2, j = 2, n = 5  # hello 2 বার প্রিন্ট হয়
i = 3, j = 3, n = 5  # hello 1 বার প্রিন্ট হয়
i = 4, j = 3, n = 5  # hello 1 বার প্রিন্ট হয়
        
i = 1, j = n/1   
i = 2, j = n/2   
i = 3, j = n/3  
i = n, j = n/n  

এখানে আপনি কিভাবে অনুমান করতে পারেন যে এটি n(logn):  

n/1+ n/2 +...+ n/n =  
n(1/1 + 1/2 + 1/3/ + 1/4 + 1/5 + 1/6 +...+ 1/n ≤  
≤ n(1/1 + 1/2 + 1/2 + 1/4 + 1/4 + 1/4 + 1/4 + 1/8 + 1/8...+ 1/2^k=  

= n(1/1 + 1/2^1 + 1/2^1 + 1/2^2 + 1/2^2 + 1/2^2 + 1/2^2 + 1/2^3 + 1/2^3...+ 1/2^k  

2^k ≈ n ⇒k ≈ (log2^n)  
 
যদি আমরা 2 এর একই শক্তি দিয়ে সমস্ত উপাদান যোগ করি, আমরা 1 পাই. Because there are ≈ (log2^n) powers, we get that the sum is ≈ n(log2^n)

```c++
int main() {
    int n = 4;
	for(int i = 1; i <= n; i++){
	    for(int j = i; j <= n; j+=i){
	        printf("Hello\n");
	    }
	}
	return 0;
}
```

21]

```c++
void function(int n)
{
    int count = 0;
    for (int i=n/2; i<=n; i++)
 
        // Executes O(Log n) times
        for (int j=1; j<=n; j = 2 * j)
 
            // Executes O(Log n) times
            for (int k=1; k<=n; k = k * 2)
                count++;
}
```

টাইম কমপ্লেক্সিটি: O(n log^2n).

22]

```c++
void function(int n)
{
    int count = 0;
 
    // outer loop executes n/2 times
    for (int i=n/2; i<=n; i++)
 
        // middle loop executes  n/2 times
        for (int j=1; j+n/2<=n; j = j++)
 
            // inner loop executes logn times
            for (int k=1; k<=n; k = k * 2)
                count++;
}
```

টাইম কমপ্লেক্সিটি : O(n2logn).

23]

```c++

void function(int n)
{
    int i = 1, s =1;
    while (s <= n)
    {
        i++;
        s += i;
        printf("*");
    }
}
```

সমাধান: We can define the terms ‘s’ according to relation s(i) = s(i) - 1 + i. The value of ‘i’ increases by one for each iteration. The value contained in ‘s’ at the ith iteration is the sum of the first ‘i’ positive integers. If k is total number of iterations taken by the program, then while loop terminates if : 1 + 2 + 3 ….+ k = [ k(k+1)/2 ] > n So k = O(√n).  

টাইম কমপ্লেক্সিটি: O(√n).  

24]

```c++
void function(int n)
{
    int count = 0;
 
    // executes n times
    for (int i=0; i<n; i++)
 
        // executes O(n*n) times.
        for (int j=i; j< i*i; j++)
            if (j%i == 0)
            {
                // executes j times = O(n*n) times
                for (int k=0; k<j; k++)
                    printf("*");
            }
}
```

টাইম কমপ্লেক্সিটি: O(n^5)

## কুইজ 

01] নিম্নলিখিত কোডের টাইম কমপ্লেক্সিট কি :

```c++
int a = 0;
for(i = 0; i < N; i++) {
   for(j = N; j > i; j--) {
      a = a + i + j;
   }
}
```  
- [ ] O(N)
- [ ] O(N*log(N))
- [ ] O(N * Sqrt(N))
- [x] O(N*N)

Explanation:  The above code runs total no of times   

= N + (N – 1) + (N – 2) + … 1 + 0   
= N * (N + 1) / 2   
= 1/2 * N^2 + 1/2 * N  

O(N^2) times.  

02] এর মানে কি যখন আমরা বলি যে একটি অ্যালগরিদম X অ্যাসিম্পটোটিকভাবে Y এর চেয়ে বেশি efficient ?

- [ ] X will always be a better choice for all inputs
- [x] X will always be a better choice for large inputs
- [ ] X will always be a better choice for small inputs
- [ ] Y will always be a better choice for small inputs

Explanation: In asymptotic analysis, we consider the growth of the algorithm in terms of input size. An algorithm X is said to be asymptotically better than Y if X takes smaller time than y for all input sizes n larger than a value n0 where n0 > 0.

03] নিম্নলিখিত কোডের টাইম কমপ্লেক্সিট কি :

```c++
int a = 0, i = N;
while (i > 0) {
   a += i;
   i /= 2;
}
```
- [ ] O(N)
- [ ] O(Sqrt(N))
- [ ] O(N / 2)
- [x] O(log N)
- [ ] O(log(log N))

Explanation: We have to find the smallest x such that ‘(N / 2^x )< 1 OR  2^x > N’   
x = log(N)  

04] নিম্নলিখিত কোডের টাইম কমপ্লেক্সিট কি : (Amazon⭐)

```c++
int count = 0;
for (int i = N; i > 0; i /= 2) {
    for (int j = 0; j < i; j++) {
        count += 1;
    }
}
```
- [ ] O(N * N)
- [ ] O(N * log N)
- [ ] O(N * log(log(N)))
- [x] O(N)
- [ ] O(N * Sqrt(N))

05] নিম্নলিখিত কোডের টাইম কমপ্লেক্সিট কি :

```c++
int i, j, k = 0;
for (i = n/2; i <= n; i++) {
    for (j = 2; j <= n; j = j * 2) {
         k = k + n/2;
    }
}
```
- [ ] Θ(n)
- [x] Θ(nLogn)
- [ ] Θ(n^2)
- [ ] Θ(n^2 / Logn)
- [ ] Θ(n^2Logn)

Explanation: If you notice, j keeps doubling till it is less than or equal to n. Several times, we can double a number till it is less than n would be log(n).   

Let’s take the examples here.   

for n = 16, j = 2, 4, 8, 16   
for n = 32, j = 2, 4, 8, 16, 32  

So, j would run for O(log n) steps. i runs for n/2 steps. So, total steps = O(n/ 2 * log (n)) = O(n*logn)  

06] In the following C++ function, let n >= m. (⭐)

```c++
int gcd(int n, int m) {
  if (n%m ==0) return m;
  if (n < m) swap(n, m);
  while (m > 0) {
    n = n%m;
    swap(n, m);
  }
  return n;
}
```

What is the time complexity of the above function assuming n > m?. 
Θ symbol represents theta notation and Ω symbol represents omega notation. 

- [x] Θ(logn)
- [ ] Ω(n)
- [ ] Θ(loglogn)
- [ ] Θ(sqrt(n))

07] In a competition, four different functions are observed. All the functions use a single for loop and within the for loop, same set of statements are executed.

Consider the following for loops:  

  A) for(i = 0; i < n; i++)  
 
  B) for(i = 0; i < n; i += 2)  
 
  C) for(i = 1; i < n; i *= 2)  
 
  D) for(i = n; i > -1; i /= 2)  
  
If n is the size of input(positive), which function is the most efficient? In other words, which loop completes the fastest.

- [ ] A
- [ ] B
- [x] C
- [ ] D

08] Which of the following is not bounded by O(n^2)?

- [ ] (15^10) * n + 12099
- [ ] n^1.98
- [x] n^3 / (sqrt(n))
- [ ] (2^20) * n

09] Which of the given options provides the increasing order of complexity of functions f1, f2, f3 and f4:

* f1(n) = 2^n  

* f2(n) = n^(3/2)  

* f3(n) = nLogn  

* f4(n) = n^(Logn)  

- [x] f3, f2, f4, f1
- [ ] f3, f2, f1, f4
- [ ] f2, f3, f1, f4
- [ ] f2, f3, f4, f1

10] What is the time complexity of the following code :

```c++
int j = 0;
for(int i = 0; i < n; ++i) {
   while(j < n && arr[i] < arr[j]) {
        j++;
   }
}
```
- [x] O(n)
- [ ] O(n^2)
- [ ] O(nlogn)
- [ ] O(n(logn)^2)

11] Which of the following best describes the useful criterion for comparing the efficiency of algorithms?

- [ ] Time
- [ ] Memory
- [x] Both of the above
- [ ] None of the above

Explanation: Comparing the efficiency of an algorithm depends on the time and memory taken by  an algorithm. The algorithm which runs in lesser time and takes less memory even for a large input size is considered a more efficient algorithm.  

12] How is time complexity measured?

- [ ] By counting the number of algorithms in an algorithm.
- [x] By counting the number of primitive operations performed by the algorithm on a given input size.
- [ ] By counting the size of data input to the algorithm.
- [ ] None of the above

13] নিম্নলিখিত কোডের টাইম কমপ্লেক্সিট কি?

```c++
for(var i=0;i<n;i++)
    i*=k
```

- [ ] O(n)
- [ ] O(k)
- [x] O(logk^n)
- [ ] O(logn^k)

Explanation: Because loops for the k^n-1 times, so after taking log it becomes logk^n.

14] Algorithm A and B have a worst-case running time of O(n) and O(logn), respectively. Therefore, algorithm B always runs faster than algorithm A.

- [ ] True
- [x] False

Explanation: The Big-O notation provides an asymptotic comparison in the running time of algorithms. For n < n^0​​, algorithm A might run faster than algorithm B, for instance.

15] কুইকসর্টের গড় কেস  টাইম কমপ্লেক্সিট?

- [ ] O(n)
- [x] O(n log n)
- [ ] O(n^2)
- [ ] O(n^3)

16] Worst case টাইম কমপ্লেক্সিটি কুইকসর্টের?

- [ ] O(n)
- [ ] O(nlogn)
- [x] O(n^2)
- [ ] O(n^3)

17] বিনারি সার্চ প্রোগ্রামের টাইম কমপ্লেক্সিটি ?

- [ ] O(1)
- [x] O(logn)
- [ ] O((logn)^ 2)
- [ ] O(n)

18]  এই প্রোগ্রামের টাইম কমপ্লেক্সিটি:

```py
def f():
    ans = 0
    for i = 1 to n:
	for j = 1 to log(i):
	   ans += 1
    print(ans)
```

- [ ] O(n)
- [x] O(nlogn)
- [ ] O(n^2)
- [ ] O(n^3)

19] এই প্রোগ্রামের টাইম কমপ্লেক্সিটি:

```py
def f():
    a = 0
    for i = 1 to n:
	a += i;
    b = 0
    for i = 1 to m:
	b += i;
```

- [ ] O(n)
- [ ] O(m)
- [x] O(n+m)
- [ ] O(n∗m)

20] 

```py
def f():
    a = 0
    for i = 1 to n:
	a += random.randint();			
	b = 0
	for j = 1 to m:
	   b += random.randint();
```

এই প্রোগ্রামের টাইম কমপ্লেক্সিটি:

- [ ] O(n)
- [ ] O(m)
- [ ] O(n+m)
- [x] O(n∗m)

21] এই প্রোগ্রামের টাইম কমপ্লেক্সিটি:

Find the sum of digits of a number in its decimal representation.

```py
def f(n):
	ans = 0
	while (n > 0):
		ans += n % 10
		n /= 10;
	print(ans)
```

- [ ] O(log 2^n)
- [ ] O(log 3^n)
- [x] O(log 10^n)
- [ ] O(n)

22] এই প্রোগ্রামের টাইম কমপ্লেক্সিটি :

```c++
def f():
   ans = 0
   for i = 1 to n:
	for j = i; j <= n; j += i:
	   ans += 1
   print(ans)
```

- [ ]  O(logn)
- [ ]  O(n)
- [x]  O(nlogn)
- [ ]  O(n^2)
