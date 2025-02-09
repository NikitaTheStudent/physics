#include "help.h"
void addLabel(QVBoxLayout *L, QString s)
{
    QLabel* lab = new QLabel(s);
    lab->setWordWrap(true);
    lab->setAlignment(Qt::AlignJustify);
    QFont f("Times New Roman", 11);
    lab->setFont(f);
    L->addWidget(lab);
}
void addImage(QVBoxLayout *L, QString s, bool transform = false)
{
    QPixmap im(s);
    QLabel* lab = new QLabel();
    if (transform)
        lab->setScaledContents(true);
    lab->setPixmap(im);
    lab->setAlignment(Qt::AlignCenter);
    L->addWidget(lab);
}

QVBoxLayout *sRect0 ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<p><center><big><b>Инструкция</b></big></center></p>");

    addLabel(Lay, "<center><big><b>Основное меню</b></big></center>");
    addLabel(Lay, "<em>Режим коридора</em>");
    addLabel(Lay, "Основное меню, расположенное в верхней строке содержит вкладки «Файл», «Справка» - доступ к информации о проекте и инструкции, "
                  "«Комнаты» - быстрое переключение между проектами.");
    addImage(Lay, ":/Sup/inst/menu_rooms.jpg");
    addLabel(Lay, "<em>Режим комнаты</em>");
    addLabel(Lay, "При переходе в режим одного проекта (комнаты), в основном меню появляется вкладка «Графики», позволяющая выбрать для построения необходимый график."
                  " «Комнаты» - для быстрого переключения между проектами.");
    addImage(Lay, ":/Sup/inst/menu_rooms2.jpg");


    addLabel(Lay, "<center><big><b>Правое меню</b></big></center>");
    addLabel(Lay, "<em>Режим коридора</em>");
    addLabel(Lay, "Правое меню представляется собой панель выбора проектов в виде кнопок с соотвествующими названиями."
                  " В меню также присутствует кнопки «О программе» (получение информации обо всем проекте) и «Перейти в комнату» (временно не активная)");
    addLabel(Lay, "При приближении к комнате активизируется кнопка «Перейти в комнату»");
    addImage(Lay, ":/Sup/inst/inter.jpg");
    addLabel(Lay, "<em>Режим комнаты</em>");
    addLabel(Lay, "В верхней части реализована панель управления параметрами движения текущей модели в виде слайдеров."
                  " В некоторых моделях присутствует флаговые кнопки для активизации особенностей расчета движения модели.");
    addImage(Lay, ":/Sup/inst/inter2_1.jpg");
    addLabel(Lay, "В средней части реализована панель управления параметрами построением графиков: "
                  " Флаговая кнопка переключения между режимом реального времени и моментальным режимом со слайдером, определяющим количество значений для построения.");
    addImage(Lay, ":/Sup/inst/inter2_2.jpg");
    addLabel(Lay, "Ниже расположена панель состояния модели, отображающая значения основных характеристик модели, а также время, прошедшее с начала эксперимента.");
    addImage(Lay, ":/Sup/inst/inter2_3.jpg");
    addLabel(Lay, "В нижней части меню - кнопки «Начать эксперимент» («Завершить эксперимент»), «Справка» - информация о математической модели текущего проекта - и «Выход из команты» - переход в режим коридора.");
    addImage(Lay, ":/Sup/inst/inter2_4.jpg");

    addLabel(Lay, "<center><big><b>Управление сценой</b></big></center>");
    addLabel(Lay, "Сцена управляется кнопкой мыши и позволяет получить круговой обзор окружающих объектов");
    addImage(Lay, ":/Sup/inst/scene.jpg");
    addLabel(Lay, "В режиме комнаты(одного проекта) вращение колесика мыши позволяет приближаться к объекты");
    addImage(Lay, ":/Sup/inst/scene2.jpg");

    addLabel(Lay, "<center><big><b>Построение графиков</b></big></center>");
    addLabel(Lay, "<em>Возможно только в режиме комнаты</em>");
    addLabel(Lay, "Управление графиком - движение графика по осям, изменение масштаба - осуществляется с помощью мыши.");
    addImage(Lay, ":/Sup/inst/gra.jpg");


    return Lay;
}


QVBoxLayout *sRect ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<center><big><b>Виртуальная лаборатория «Осцилляторы»</b></big></center>");
    addLabel(Lay, "Данная виртуальная лаборатория представляет собой объединение восьми проектов, реализующих выполнение лабораторных работ с различными видами маятников."
                  "<br> Проекты могут использованы для наблюдения за процессами и проведения реальных экспериментов.</br>"
                  "<br></br>"
                  "<br>Проект выполнен студентами второго курса ФПМИ под руководством доцента кафедры Общей физики Баранова А.В.</br>"
                  "<br></br>"
                  ""
                  "<br><em>Главные авторы проекта:</em></br>"
                  "<br> </br>"
                  "<br>Ким Станислав</br>"
                  "<br>Максимова Софья</br>"
                  "<br>Скрынник Никита</br>"
                  "<br>Сычев Егор</br>"
                  "<br>Дьячкова Марина</p>");
    //addImage(Lay, ":/Sup/fami.png");
    addLabel(Lay, "<center><br><small>Факультет прикладной математики и информатики, 2019</small></br></center>");

    //addImage(Lay, ":/Res/1.jpg");
    return Lay;
}

QVBoxLayout *sRect1 ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<center><big><b>Торсионный маятник</b></big></center>");
    addLabel(Lay, "<big><b>Физическая и математическая составляющие проекта</b></big>");
    addLabel(Lay, "«Торсионный маятник» - это механическая система, представляющая собой стержень на каждом конце которого закреплены грузики. "
                  "Стержень по центру закреплён на штифте. Стержень обладает лишь одной степенью свободы: "
                  "вращением вокруг оси при выведении из состояния равновесия за счёт возникновения возвращающего крутящего момента. ");
    addImage(Lay, ":/Sup/Math1/2.jpg");
    addLabel(Lay, "Движение маятника описывается основным уравнением динамики вращательного движения.");
    addImage(Lay, ":/Sup/Math3/2.png");
    addLabel(Lay, "Уравнение движения для угла отклонения φ свободно колеблющегося крутильного маятника, записывается следующим образом:");
    addImage(Lay, ":/Sup/Math1/1.jpg");
    return Lay;
}

QVBoxLayout *sRect2 ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addImage(Lay, ":/Sup/Math2/1.png");
    addImage(Lay, ":/Sup/Math2/2.PNG");
    addImage(Lay, ":/Sup/Math2/3.PNG");
    addImage(Lay, ":/Sup/Math2/4.PNG");
    addImage(Lay, ":/Sup/Math2/5.PNG");
    addImage(Lay, ":/Sup/Math2/6.PNG");
    addImage(Lay, ":/Sup/Math2/7.PNG");
    addImage(Lay, ":/Sup/Math2/8.PNG");


    return Lay;
}

QVBoxLayout *sRect3 ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<center><big><b>Колебания жесткого математического маятника с большими амплитудами</b></big></center>");
    addLabel(Lay, "<big><b>Физическая и математическая составляющие проекта</b></big>");
    addLabel(Lay, "Математический маятник — модель осциллятора, представляющая собой механическую систему, состоящую из материальной "
                  "точки на конце невесомого стержня и "
                  "находящуюся в однородном поле сил тяготения. \n\n В данном проекте реализуется модель математического маятника без учета силы трения в точке подвеса. "
                  "Данная модель позволяет моделировать колебания при любых (в том числе достаточно больших) углах отклонения от положения равновесия. ");
    addImage(Lay, ":/Sup/Math3/1.png");
    addLabel(Lay, "Движение маятника описывается основным уравнением динамики вращательного движения.");
    addImage(Lay, ":/Sup/Math3/2.png");
    addLabel(Lay, "На маятник действует момент силы:");
    addImage(Lay, ":/Sup/Math3/3.png");
    addLabel(Lay, "В проекции на Ох:");
    addImage(Lay, ":/Sup/Math3/4.png");
    addLabel(Lay, "(Момент силы М равен произведению составляющей силы тяжести F<sub>2</sub> на плечо ℓ)");
    addImage(Lay, ":/Sup/Math3/5.png");
    addLabel(Lay, "После подстановки значений формула имеет вид:");
    addImage(Lay, ":/Sup/Math3/6.png");
    addLabel(Lay, "Дифференциальное уравнение колебаний математического маятника без трения:");
    addImage(Lay, ":/Sup/Math3/7.png");
    addLabel(Lay, "Чтобы сделать модель маятника более точной и приближенной к реальным условиям, было учтено сопротивление среды. "
                  "В этом случае так же принимается во внимание размеры шарика, ранее рассматриваемого только в качестве материальной точки.");
    addImage(Lay, ":/Sup/Math3/8.png");
    addLabel(Lay, "Вектор силы сопротивления коллинеарен тангенциальной составляющей вектора скорости и ускорения движения маятника, при этом противоположен вектору скорости.");
    addLabel(Lay, "Величина силы сопротивления пропорциональна характерной площади S (для шара – площади поперечного сечения), плотности среды ρ и квадрату скорости V:");
    addImage(Lay, ":/Sup/Math3/9.png");
    addLabel(Lay, "C<sub>x</sub>— безразмерный аэродинамический коэффициент сопротивления, приблизительно равный 0.3 для шара");
    addLabel(Lay, "(https://ru.wikipedia.org/wiki/Лобовое_сопротивление)");
    addImage(Lay, ":/Sup/Math3/10.png");
    addLabel(Lay, "Тогда дифференциальное уравнение имеет вид:");
    addImage(Lay, ":/Sup/Math3/11.png");
    return Lay;
}


QVBoxLayout *sRect4 ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<center><h2>Измерение скорости пули с помощью баллистического маятника</h2></center>");
    addLabel(Lay, "<h3>Физическая и математическая составляющая проекта</h3>");
    addLabel(Lay, "Баллистический маятник представляетсобой тяжелое тело, подвешенное на двух нитях. "
                  "Горизонтально летящая пуля попадает в маятник и застревает в нем, происходит неупругий удар."
                  "После удара маятник начинает качаться на нитях, так что его продольная ось остается"
                  "параллельной самой себе, а центр масс движется по окружности.");
    addImage(Lay, ":/Sup/Math4/help1.jpg");
    addLabel(Lay, "Данная модель реализуется без учета силы трения в точке подвеса, а также без учета сопротивления воздуха."
                  "Колебания в модели не являются затухающими");
    addLabel(Lay, "После удара маятник (вместе с пулей) отклоняется от положения равновесия. Из закона сохранения импульса находим скорость маятника:");
    addImage(Lay, ":/Sup/Math4/help2.bmp");
    addLabel(Lay, "где m - масса пули, M - масса груза");
    addLabel(Lay, "После удара движения маятника описывается вторым законом Ньютона:");
    addImage(Lay, ":/Sup/Math4/help3.bmp");
    addLabel(Lay, "Отсюда получаем дифференциальное уравнения движения маятника:");
    addImage(Lay, ":/Sup/Math4/help4.bmp");
    addLabel(Lay, "где х - угол отклонения от положения равновесия в радианах.");
    addLabel(Lay, "Решив это уравнение, получаем уравнение движения маятника вдоль оси Ox:");
    addImage(Lay, ":/Sup/Math4/help5.bmp");
    addLabel(Lay, "где х - смещение вдоль оси Ох, t - время, прошедшее с момента столкновения.");
    return Lay;
}


QVBoxLayout *sRect5 ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<center><big><b>Связанные физические маятники</b></big></center>");
    addLabel(Lay, "<big><b>Физическая и математическая составляющие проекта</b></big>");
    addLabel(Lay, "Система состоит из двух физических маятников, расположенных на расстоянии l от точек подвеса, связанных между собой невесомой пружиной с коэффициентом жесткости k. "
                  "Пружина находится на расстоянии d от точек подвеса, расположенных на одной горизонтальной прямой. При движении маятников в одной вертикальной плоскости состояние "
                  "такой системы полностью описывается двумя независимыми параметрами: "
                  "углами  θ<sub>1</sub> и  θ<sub>2</sub> отклонения маятников от вертикали, т.е. система имеет две степени свободы.");
    addImage(Lay, ":/Sup/Math5/1.png");
    addLabel(Lay, "Уравнение движения для каждого маятника можно получить из общего уравнения динамики вращательного движения вокруг неподвижной оси:");
    addImage(Lay, ":/Sup/Math5/2.png");
    addLabel(Lay, "В отсутствии трения на первый маятник действует момент вращения создаваемый силой тяжести,");
    addImage(Lay, ":/Sup/Math5/3.png");
    addLabel(Lay, "и момент силы упругости:");
    addImage(Lay, ":/Sup/Math5/4.png");
    addLabel(Lay, "Поэтому уравнение движения первого маятника будет иметь вид:");
    addImage(Lay, ":/Sup/Math5/5.png");
    addLabel(Lay, "Аналогичная формула получается и для второго маятника."
                  "Таким образом, мы получили систему уравнений движения маятников:");
    addImage(Lay, ":/Sup/Math5/6.png");

    addLabel(Lay, "Для малых углов отклонения, сложив и вычитая уравнения, получим два независимых уравнения:");
    addImage(Lay, ":/Sup/Math5/7.png");
    addLabel(Lay, "В итоге, углы отклонения маятников можно найти в виде:");
    addImage(Lay, ":/Sup/Math5/8.png");

    addLabel(Lay, "Рассмотрим два случая, когда между маятниками не происходит обмен энергией:");
    addLabel(Lay, "<big><b>1 случай:</b></big>");
    addLabel(Lay, "Синфазные гармонические колебания: в начальный момент t=0 маятники были отклонены в одну сторону на одинаковый угол и имели одинаковые скорости"
                  "\nВ этом случае пружина не деформируется, упругой силы и ее момента нет, оба маятника колеблются с одинаковой частотой:");
    addImage(Lay, ":/Sup/Math5/9.png");
    addLabel(Lay, "<big><b>2 случай:</b></big>");
    addLabel(Lay, "Противофазные гармонические колебания: в начальный момент t=0 маятники были отклонены в разные стороны на одинаковый угол и проекции скоростей были равны:");
    addImage(Lay, ":/Sup/Math5/10.png");
    addLabel(Lay, "В этом случае пружина максимально деформируется, производя дополнительную упругость в системе, маятники совершают колебания с частотой:");
    addImage(Lay, ":/Sup/Math5/11.png");

    addLabel(Lay, "Такие колебания называются нормальными модами колебаний (или нормальными колебаниями) системы связанных осцилляторов, а частоты ω<sub>1</sub>и ω<sub>2</sub> – нормальными частотами."
                  "Нормальная мода колебаний – это гармонические колебания, которые совершает каждый из связанных маятников при специальном выборе начальных условий. При любом другом"
                  "выборе начальных отклонений в каждом из маятников возникают сразу оба нормальных колебания, т.е. возникающие колебания представляют собой суперпозицию двух нормальных колебаний."
                  "С течением времени энергия постепенно передается от одного маятника к другому, процесс обмена энергии повторяется, в результате чего возникают биения.");

    addLabel(Lay, "<big><b>Введем обозначение:</b></big>");
    addLabel(Lay, "Средняя частота колебаний маятника:");
    addImage(Lay, ":/Sup/Math5/13.png");
    addLabel(Lay, "Полная энергия двух маятников равна:");
    addImage(Lay, ":/Sup/Math5/15.png");
    addLabel(Lay, "Полная энергия каждого из маятников равна соответственно:");
    addImage(Lay, ":/Sup/Math5/16.png");
    addLabel(Lay, "<big><b>Рассмотрим случай, когда в начальный момент t=0 отклонили лишь первый маятник, а второй находится в положении равновесия:</b></big>");
    addLabel(Lay, "Тогда отклонённый маятник начинает качаться вправо-влево и то тянет за собой, то толкает перед собой пружину, которая попеременно тянет и толкает другой маятник."
                  "Пружина мешает двигаться первому маятнику, но помогает второму, и таким образом обеспечивает передачу энергии от первого маятника ко второму. Как только первый маятник "
                  "потеряет всю энергию, процесс обмена энергии повторяется.");
    addLabel(Lay, "При максимальной амплитуде первый маятник обладает всей энергией системы, т.е. потенциальной энергией:");
    addImage(Lay, ":/Sup/Math5/12.png");

    addLabel(Lay, "<big><b>Авторы проекта:</b></big>");
    addLabel(Lay, "Голованова Дарья, ПМ-72");
    addLabel(Lay, "Столярова Лилия, ПМ-73");
    addLabel(Lay, "Терлеев Андрей, ПМ-72");

    return Lay;
}

QVBoxLayout *sRect6 ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<center><big><b>Оборотный маятник</b></big></center>");
    addLabel(Lay, "<big><b>Физическая и математическая составляющие проекта</b></big>");
    addLabel(Lay, "Оборотный маятник - прибор для экспериментального определения ускорения свободного падения g. Представляет собой физический маятник."
                  "Маятник состоит из тонкого однородного стержня длиной l,  по которому можно перемещать два одинаковых массивных диска A1 и A2, призматических упоров S1 и S2, опираясь на которые маятник может совершать колебания.");
    addImage(Lay, ":/Sup/Math6/1.png");
    addImage(Lay, ":/Sup/Math6/2.png");
    addLabel(Lay, "При отклонении маятника от положения равновесия на угол a возникает вращающий момент, созданный силой тяжести");
    addImage(Lay, ":/Sup/Math6/3.png");
    addImage(Lay, ":/Sup/Math6/4.png");
    addLabel(Lay, "Основной закон динамики вращательного движения в проекциях на ось вращения Z");
    addImage(Lay, ":/Sup/Math6/5.png");
    addLabel(Lay, "Получаем:");
    addImage(Lay, ":/Sup/Math6/6.png");
    addLabel(Lay, "Дифференциальное уравнение колебаний оборотного маятника примет вид:");
    addImage(Lay, ":/Sup/Math6/7.png");
    addLabel(Lay, "<big><b>Вывод момента инерции маятника</b></big>");
addLabel(Lay, "Момент инерции такого маятника будет складываться из моментов инерции стержня и дисков:");
    addImage(Lay, ":/Sup/Math6/8.png");
    addLabel(Lay, "Момент инерции стержня можно рассчитать с помощью теоремы Штейнера:");
    addImage(Lay, ":/Sup/Math6/9.png");
addLabel(Lay, "Момент инерции стержня относительно оси, проходящей через центр масс:");
    addImage(Lay, ":/Sup/Math6/10.png");

    addLabel(Lay, "Тогда момент инерции стержня примет вид:");
    addImage(Lay, ":/Sup/Math6/11.png");
addLabel(Lay, "mст - масса стержня");
    addLabel(Lay, "lст - длина стержня ");
    addLabel(Lay, "d– расстояние от центра масс стержня до точки подвеса");
    addLabel(Lay, "Момент инерции диска получен с помощью теоремы Штейнера:");
    addImage(Lay, ":/Sup/Math6/12.png");
    addLabel(Lay, "Здесь R - радиус диска, h - высота диска, r - расстояние от оси вращения до центра масс диска");
    addLabel(Lay, "R - радиус диска, h - высота диска, r - расстояние от оси вращения до центра масс диска");
    addLabel(Lay, "Момент инерции маятника имеет вид:");
    addImage(Lay, ":/Sup/Math6/13.png");
    addLabel(Lay, "<big><b>Авторы проекта:</b></big>");
    addLabel(Lay, "Дербышева Тания, ПМ-72");
    addLabel(Lay, "Громовая Татьяна, ПМ-73");

    return Lay;
}


QVBoxLayout *sRect7 ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<center><big><b>Виртуальная лабораторная работа: Маятник Галилея</b></big></center>");
    addLabel(Lay, "Маятник Галилея – механическая система, представляющая из себя тело, подвешенное на нити,"
                  " во время движения груза нить сталкивается с препятствием."
                  " Препятствие представляет из себя тонкий стержень, закреплённый перпендикулярно штативу маятника.\n");
    addLabel(Lay, "Пренебрегаем массой нити, считаем, что вся масса маятника сосредоточена в центре масс тела"
                  " и рассматриваем его движение при малых отклонениях от положения равновесия,"
                  " при таких условиях тело можно считать материальной точкой. \n");
    addLabel(Lay, "Результирующие движение груза представляет собой чередование движения «до столкновения с препятствием»"
                  " – тогда система представляет собой обычный математический маятник и «после столкновения»"
                  " – тот же маятник, но длина нити будет меньше.\n\n");
    addLabel(Lay, "Система с расстановкой всех сил:");
    addImage(Lay, ":/Sup/Math7/1.jpg");
    addLabel(Lay, "Дифференциальное уравнение движения мятника:");
    addImage(Lay, ":/Sup/Math7/2.jpg");
    addLabel(Lay, "Аналитическое решение имеет вид:");
    addImage(Lay, ":/Sup/Math7/3.jpg");
    addLabel(Lay, "\nСобственная частота колебаний маятника до столкновения с препятствием:");
    addImage(Lay, ":/Sup/Math7/4.jpg");
    addLabel(Lay, "и после столкновения:");
    addImage(Lay, ":/Sup/Math7/5.jpg");
    addLabel(Lay, "где g - ускорение свободного падения, l - длина нити маятника, h - высота планки с препятствием.\n");
    addLabel(Lay, "Периоды колебаний соответственно: ");
    addImage(Lay, ":/Sup/Math7/6.1.jpg");
    addLabel(Lay, "Полный период системы: ");
    addImage(Lay, ":/Sup/Math7/6.2.jpg");
    addLabel(Lay, "\nСкорость движения материальной точки: ");
    addImage(Lay, ":/Sup/Math7/7.jpg");
    addLabel(Lay, "\nПредполагаем, что сопротивления в системе нет, закон сохранения механической энергии имеет вид: ");
    addImage(Lay, ":/Sup/Math7/8.jpg");
    addLabel(Lay, "\nСкорость движения материальной точки: ");
    addImage(Lay, ":/Sup/Math7/9.jpg");
    addLabel(Lay, "где l - длина нити, x - угол отклонения от положения равновесия");
    addLabel(Lay, "\nГлавное окно программы:");
    addImage(Lay, ":/Sup/Math7/10.jpg");
    addLabel(Lay, "1. Главное меню. С помощью него осуществляется вызов графиков и справочной информации.\n"
                  "Доступные для построения графики физических характеристик: кинетическая, потенциальная, полная энергии и линейная скорость.");
    addLabel(Lay, "2. Слайдеры для задания начальных значений системы.\n"
                  "Слайдер начального угла отклонения позволяет задавать начальное смещение от 0 до 30 градусов.\n"
                  "Слайдер высоты планки с препятствием, диапазон размещений от 0.2 до 0.9 метров.\n"
                  "Слайдер массы груза, позволяет задавать массу груза в пределах от 0.5 до 10 килограммов.");
    addLabel(Lay, "3. Опция динамического построения графиков, таймер времени эксперимента; "
                  "переключатель, с помощью которого можно начать и завершить эксперимент, кнопка выхода из программы. ");
    return Lay;
}

QVBoxLayout *sRect8 ()
{
    QVBoxLayout *Lay = new QVBoxLayout();
    addLabel(Lay, "<center><big><b>Электростатический маятник</b></big></center>");
    addLabel(Lay, "<big><b>Физическая и математическая составляющие проекта</b></big>");
    addLabel(Lay, "Электростатический маятник представляет из себя механическую систему,"
                  "которая состоит из металлического шарика, закреплённого на нити между двумя плоскими конденсаторами.");
    addImage(Lay, ":/Sup/Math8/1.jpg");
    addLabel(Lay, "Колебательные движения маятника описываются вторым законом Ньютона");
    addImage(Lay, ":/Sup/Math8/2.jpg");
    addLabel(Lay, "Для расчета координат шарика необходимо знать расстояние между пластинами,"
                  "напряжение на пластинах, диаметр шарика и массу шарика.");
    addLabel(Lay, "Координаты положения шарика рассчитываются следующим образом: \n"
                  "Для оси X: \n𝐹𝑝 = 𝑚𝑥^^ \n𝐹𝑝𝑥 = 𝐹𝑘𝑥 − 𝑇∗sin𝛼 \n𝑚𝑥^^ = 𝐹𝑘𝑥 − 𝑇∗sin𝛼 \nДля оси Y: \n𝐹𝑝 = 0 \n𝐹𝑝𝑦 = 𝑇∗cos𝛼 − 𝑚𝑔 \n0 = 𝑇∗cos𝛼 − 𝑚𝑔");
    addLabel(Lay, "В окне приложения есть четыре ползунка: пользователю доступна регулировка расстояния между пластинами,"
                  "напряжения на пластинах, диаметра шарика и массы шарика. \n"
                  "Изменение угла обзора на анимацию эксперимента производится с помощью мыши. \n"
                  "Масштабирование анимации эксперимента производится с помощью колеса мыши.");
    return Lay;
}
