
> You can contact me on my education account [m09191187@it.misuratau.edu.ly](mailto:m09191187@it.misuratau.edu.ly). 
>Created by [Firas Al Dweni](https://facebook.com/firasaldweni). in 2022.  




# <h1 dir='rtl' align='right'>هياكل البيانات - ربيع 2022</h1>
## <h2 dir='rtl' align='right'>⌛ المهمة الأولى</h2>
> <p dir='rtl' align='right' style="font-size: 20px">
> <strong> باستخدام القوائم المرتبطة Lists Linked  قم بكتابة وتنفيذ ما يلي : <br> </strong>
>1 .ضمن الدالة الرئيسية () main في البرنامج، قم بتكوين قائمة مرتبطة لتمثل طابور عناصره أرقام صحيحة مع قيم مؤشرات.<br>
>2 .أملأ الطابور بعدد من العناصر بطريقة الإضافة من الخلف، اكتب دالة لذلك.<br>
>3 .اكتب ونفذ دالة إضافة عنصر إلى الطابور بعد عنصر بقيمة معينة معطاة.<br>
>4 .اكتب ونفذ دالة لحذف عنصر يقع بعد عنصر بقيمة معينة معطاة.<br>
>5 .اكتب ونفذ دالة لإيجاد حجم الطابور في وقت معين.<br>
>6 .اكتب ونفذ دالة لمسح الطابور. <br>
</p>


## <h2 dir='rtl' align='right'>⌛ نبذة عامة: </h2>

> <p dir='rtl' align='right' style="font-size: 20px">
>❯ تم إنشاء كلاس باسم linkQueue به كل الدوال المطلوبة <br>
>❯ تم وضع القيم الابتدائية في دالة البناء ()linkQueue <br>
>❯ تم استخدام template ليعطي حرية للكلاس اختيار نوع المتغير المناسب <br>
>❯ تم إنشاء سجل باسم node يحتوي عليه متغير ومؤشر، يمثل المتغير باسم item قيمة العقدة والمؤشر باسم next إلى العنوان الذي متصل به<br>
</p>




## <h2 dir='rtl' align='right'>⌛ الدوال التي تم استخدامها: </h2>

> <p dir='rtl' align='right' style="font-size: 20px">
> ()enQueue_first<br>
>تقوم بإضافة عقدة جديدة node للطابور من الأمام<br>
><br>
>()enQueue_last<br>
>تقوم بإضافة عقدة جديدة node للطابور من الخلف<br>
><br>
>enQueue(t afterN, t element)<br>
>تقوم بالبحث عن القيمة التي سيتم الإضافة بعدها وتخزن عقدة جديدة<br>
><br>
><br>
>()deQueue_first<br>
>تقوم بحذف عنصر (node) من الطابور من الأمام<br>
><br>
>()deQueue_last<br>
>تقوم بحذف عنصر (node) من الطابور من الخلف
><br>
>deQueue(t element)<br>
>تقوم بحذف العنصر (node) بعد القيمة المحددة في الدالة<br>
><br>
>()isEmpty<br>
>تقوم بالتأكد من أن الطابور فراغ أم لا<br>
><br>
>()clearQueue<br>
>تقوم بتفريخ الطابور وحذف كل القيم<br>
><br>
>getFront(t& element)<br>
>getRear(t& element)<br>
>تقوم بإرجاع القيمة الأمامية والخلفية للطابور<br>
><br>
>()getSize<br>
>تقوم بإرجاع عدد العقد أو القيم في الطابور<br>
><br>
>()dispaly<br>
>تقوم بطباعة عناصر الطابور على شكل مصفوفة<br>
</p>
