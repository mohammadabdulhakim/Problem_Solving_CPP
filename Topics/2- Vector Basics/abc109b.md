إليك **حل نموذجي بأسلوب Coach محترف** مع شرح التفكير وخطوات الحل، ثم **الكود بـ C++** جاهز للنسخ.

---

# ✅ **طريقة التفكير (Coach Explanation)**

المطلوب التأكد من شرطين في لعبة *Shiritori*:

### **1) عدم تكرار أي كلمة**

نستخدم `set` لتخزين الكلمات التي ظهرت قبل كده.
لو ظهرت كلمة موجودة بالفعل → نخالف القاعدة → الإجابة "No".

### **2) كل كلمة تبدأ بآخر حرف من الكلمة السابقة**

نقارن:

```
W[i].front() == W[i-1].back()
```

لو مش متساويين → مخالفة القاعدة → "No".

لو عدّينا على كل الكلمات بدون مخالفات → "Yes".

---

# ✅ **تعقيد الحل**

* `O(N)`
* N ≤ 100، وبالتالي الحل سريع جدًا.

---

# ✅ **الحل بـ C++ (نظيف + احترافي)**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<string> W(N);
    for(int i = 0; i < N; i++) {
        cin >> W[i];
    }

    set<string> used;
    used.insert(W[0]);

    for(int i = 1; i < N; i++) {
        // شرط عدم التكرار
        if (used.count(W[i])) {
            cout << "No\n";
            return 0;
        }

        // شرط تطابق الحرف الأخير مع الأول
        if (W[i][0] != W[i-1].back()) {
            cout << "No\n";
            return 0;
        }

        used.insert(W[i]);
    }

    cout << "Yes\n";
    return 0;
}
```
