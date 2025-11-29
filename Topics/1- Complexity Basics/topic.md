# 🚀 **Complexity Basics — الأساس اللي يمشيك صح في DSA**

## 🎯 أولًا: يعني إيه Complexity؟

**الـ Complexity** هي طريقة لقياس **قد إيه الكود بتاعك هيكون بطيء أو تقيل** لما الـ input يكبر.
مش بنقيس الوقت الحقيقي… لأ، بنقيس "تأثير الحجم" على الأداء.

زي ما تقول:
لو معاك عربية… مهم؟ أيوه.
بس الأهم: العربية هتعمل إيه لو شيلنا فوقها 5 طن؟

نفس الفكرة مع الـ code.

---

# 🔹 أنواع الـ Complexity

في اتنين مهمين:

## 1️⃣ **Time Complexity**

بتقيس *عدد العمليات* اللي الكود بيعملها.

## 2️⃣ **Space Complexity**

بتقيس *كمية الذاكرة* اللي الكود بيحتاجها.

---

# 🔥 Big-O Notation — لغة التقييم

دي الطريقة اللي بنكتب بيها الـ complexity.

## 🅾️ **O(1) — Constant Time**

يعني العملية بتتنفذ بغض النظر عن حجم الـ input.

مثال:

```cpp
int x = arr[0];  // access element
```

زي ما تفتح نور الأوضة بزرار… الحجم مش فارق.

---

## 🅾️ **O(log n) — Logarithmic Time**

كل خطوة بتقلل المشكلة للنص.

مثال: **Binary Search**
بتدور على رقم بين 1 مليون رقم في ~20 خطوة بس.

زي لما تقسم كتاب نصين كل مرة علشان تلاقي صفحة معينة.

---

## 🅾️ **O(n) — Linear Time**

بتمشي على العناصر واحد واحد.

مثال:

```cpp
for(int i = 0; i < n; i++) cout << arr[i];
```

زي ما تعد فلوس في محفظة… كل ورقة لازم تشوفها.

---

## 🅾️ **O(n log n)**

من أشهر الـ complexities.
ده بيظهر في **sorting algorithms** (merge sort, quicksort).

فكّر فيها زي:

* عندك n عناصر
* وبتعمل عليهم عملية log n مرات

---

## 🅾️ **O(n²) — Quadratic Time**

لما يكون عندك nested loops.

مثال:

```cpp
for(int i = 0; i < n; i++)
  for(int j = 0; j < n; j++)
     ...
```

زي لو بتقارن كل طالب في الفصل بكل طالب تاني.

---

## 🅾️ **O(2ⁿ) — Exponential Time**

بتزيد سرعة بطريقة مرعبة…
الخوارزميات دي قاتلة.

مثال: brute force على subset problems.

---

## 🅾️ **O(n!) — Factorial Time**

زي الـ permutations.
أسوأ حاجة ممكن تشوفها.

---

# ⚡ أمثلة واقعية تساعدك تحفظها

| السيناريو                    | الـ Complexity |
| ---------------------------- | -------------- |
| فتح باب البيت                | O(1)           |
| تقليب هدومك تدور على تي-شيرت | O(n)           |
| البحث في قاموس ورقي بالنص    | O(log n)       |
| فرز أرقام الامتحانات         | O(n log n)     |
| مقارنة كل حد بكل حد في أوضة  | O(n²)          |

---

# ✔️ إزاي تعرف الـ Complexity من غير ما تحفظ قوانين؟

**قاعدة ذهبية:**

1. أي loop → غالبًا O(n)
2. loop جواه loop → غالبًا O(n²)
3. loop بيقلل الحجم بالنص → O(log n)
4. loop بيعدي n مرة وكل مرة O(log n) → O(n log n)

---

# ⭐ قبل ما أنهي… أهم نصيحة كـ Coach

الـ Complexity مش إنك تحفظ O(n²) و O(n)…
اللي يفرّقك:
**تفهم ليه الكود بياخد وقت… وليه لازم تبنيه صح من الأول.**

—


# 🚀 **Space Complexity — فهم الذاكرة اللي كودك بيستهلكها**

## 🎯 الأول: يعني إيه Space Complexity؟

هي قياس **قد إيه الكود بيستهلك مساحة في الذاكرة (RAM)** أثناء التنفيذ.

مش الوقت… **المساحة**.

بتحسب:

1. المتغيرات
2. الـ arrays
3. الـ recursion stack
4. أي structure بتعمله أثناء التنفيذ

> الهدف إنك تعرف:
> **الكود ده بياخد مساحة ثابتة… ولا بيكبر مع حجم المدخلات؟**

---

# 🔥 الأنواع الأساسية لحد ما تبقى محترف

## 🟢 **O(1) — Constant Space**

ذاكرة ثابتة، مهما حجم الـ input كبر.

مثال:

```cpp
int sum = 0;
for(int i = 0; i < n; i++) sum++;
```

هنا:

* مفيش arrays
* مفيش structures
* الميموري المستخدمة هي: sum + i → ثابتة

**المثال الواقعي:**
زي ما تذاكر ومعاك قلم واحد وإستيكة. مش بتحتاج مكتب كبير.

---

## 🟡 **O(n) — Linear Space**

بتستخدم مساحة proportional مع n.

مثال:

```cpp
vector<int> v(n);
```

أو تخزين كل العناصر في list.

أو:

```cpp
int freq[100000];
```

**المثال الواقعي:**
زي شنطة السفر: كل ما عدد الهدوم يزيد، الشنطة تملا.

---

## 🟣 **O(log n)** — لوغاريتمي

بيظهر غالبًا في **recursion** اللي بتقسم المشكلة للنص.

مثال:
Binary Search (recursive version)

كل call بينزل واحدة… فعمق الاستدعاء = log n.

---

## 🔴 **O(n²)** — Quadratic Space

لما تستخدم مصفوفة 2D بحجم n × n
زي DP بتاع Longest Palindromic Subsequence.

مثال:

```cpp
int dp[n][n];
```

---

# 💥 الفرق بين Time و Space (مهم!)

* Time → "قد إيه هياخد وقت؟"
* Space → "قد إيه هياخد RAM؟"

مثال:
Merge Sort

* Time = O(n log n)
* Space = O(n)   (لإنه بيعمل arrays إضافية)

Quick Sort

* Time = O(n log n)
* Space = O(log n)  (stack depth)

---

# 🧠 أهم حاجة في فهم Space

## 1) **المتغيرات الثابتة → O(1)**

زي:

```cpp
int a, b, c;
```

## 2) **المصفوفات والـ vectors → حسب حجمها**

```cpp
vector<int> v(n);  // O(n)
```

## 3) **الـ Recursion Stack**

ده ناس كتير بتنساه.

مثال:

```cpp
void solve(int n){
    if(n == 0) return;
    solve(n-1);
}
```

عمق الاستدعاء = n
→ Space = **O(n)**

مثال أفضل:
Binary Search
→ العمق = log n
→ Space = **O(log n)**

---

# 📌 ملاحظات محترفين (هتفرقك في المسابقات)

### ✔️ لو بتعدي على array بس من غير تخزين → O(1)

حتى لو الـ input حجمه 10 مليون.

### ✔️ أي DP غالبًا O(n²) أو O(n) حسب الجدول.

### ✔️ لو بتحول recursive ل iterative بتحسن الـ space جدًا.

### ✔️ في graphs:

* adjacency list → O(V + E)
* adjacency matrix → O(V²)

---

# 🧩 أمثلة تطبيقية سريعة

## 🔸 Example 1

Find max element in array:

```cpp
int mx = arr[0];
for(int i = 1; i < n; i++)
    mx = max(mx, arr[i]);
```

**Space = O(1)**
(بنعمل loop بس… منخزنش حاجة)

---

## 🔸 Example 2

Copy array:

```cpp
vector<int> b = a;
```

**Space = O(n)**
لأنك خزّنت نسخة كاملة.

---

## 🔸 Example 3

DFS in graph (recursive):

```
void dfs(int node){
    visited[node] = true;
    for(int nxt : adj[node]) dfs(nxt);
}
```

Space =

* visited → O(n)
* recursion stack → O(n) worst case
  → **Total = O(n)**

---

# 🎯 تلخيص Coach

* **O(1)** → ثابت
* **O(n)** → مساحة بتملى حسب حجم الـ input
* **O(log n)** → recursion يقسم المشكلة
* **O(n²)** → جداول أو مصفوفات 2D
* **Recursive depth = جزء مهم جدًا**
