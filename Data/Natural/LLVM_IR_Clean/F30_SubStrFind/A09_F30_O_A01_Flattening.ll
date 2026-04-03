define dso_local i32 @SubStrFind(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %13 = load i8*, i8** %4
  %14 = call i64 @strlen(i8* %13)
  %15 = trunc i64 %14 to i32
  store i32 %15, i32* %6
  %17 = load i8*, i8** %5
  %18 = call i64 @strlen(i8* %17)
  %19 = trunc i64 %18 to i32
  store i32 %19, i32* %7
  %20 = load i32, i32* %7
  %21 = icmp eq i32 %20, 0
  br i1 %21, label %22, label %23
22:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %83
23:
  store i32 0, i32* %9
  store i32 0, i32* %10
  store i32 0, i32* %11
  br label %27
27:
  %28 = load i32, i32* %9
  %29 = icmp ne i32 %28, -1
  br i1 %29, label %30, label %78
30:
  %31 = load i32, i32* %9
  switch i32 %31, label %77 [
    i32 0, label %32
    i32 1, label %40
    i32 2, label %41
    i32 3, label %71
    i32 4, label %73
    i32 5, label %74
  ]
32:
  %33 = load i32, i32* %10
  %34 = load i32, i32* %6
  %35 = load i32, i32* %7
  %36 = sub nsw i32 %34, %35
  %37 = icmp sle i32 %33, %36
  %38 = zext i1 %37 to i64
  %39 = select i1 %37, i32 1, i32 4
  store i32 %39, i32* %9
  br label %77
40:
  store i32 0, i32* %11
  store i32 2, i32* %9
  br label %77
41:
  %42 = load i32, i32* %11
  %43 = load i32, i32* %7
  %44 = icmp slt i32 %42, %43
  br i1 %44, label %45, label %64
45:
  %46 = load i8*, i8** %4
  %47 = load i32, i32* %10
  %48 = load i32, i32* %11
  %49 = add nsw i32 %47, %48
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* %46, i64 %50
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = load i8*, i8** %5
  %55 = load i32, i32* %11
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i8, i8* %54, i64 %56
  %58 = load i8, i8* %57
  %59 = sext i8 %58 to i32
  %60 = icmp eq i32 %53, %59
  br i1 %60, label %61, label %64
61:
  %62 = load i32, i32* %11
  %63 = add nsw i32 %62, 1
  store i32 %63, i32* %11
  br label %70
64:
  %65 = load i32, i32* %11
  %66 = load i32, i32* %7
  %67 = icmp eq i32 %65, %66
  %68 = zext i1 %67 to i64
  %69 = select i1 %67, i32 3, i32 5
  store i32 %69, i32* %9
  br label %70
70:
  br label %77
71:
  %72 = load i32, i32* %10
  store i32 %72, i32* %3
  store i32 1, i32* %8
  br label %79
73:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %79
74:
  %75 = load i32, i32* %10
  %76 = add nsw i32 %75, 1
  store i32 %76, i32* %10
  store i32 0, i32* %9
  br label %77
77:
  br label %27
78:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %79
79:
  br label %83
83:
  %86 = load i32, i32* %3
  ret i32 %86
}
declare i64 @strlen(i8*)
