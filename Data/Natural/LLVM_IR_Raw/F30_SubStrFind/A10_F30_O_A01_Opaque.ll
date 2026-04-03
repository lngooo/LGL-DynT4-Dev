@.str = constant [4 x i8] c"%d\0A\00"
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
  br label %85
23:
  store i32 0, i32* %9
  br label %25
25:
  %26 = load i32, i32* %9
  %27 = load i32, i32* %6
  %28 = load i32, i32* %7
  %29 = sub nsw i32 %27, %28
  %30 = icmp sle i32 %26, %29
  br i1 %30, label %32, label %31
31:
  store i32 2, i32* %8
  br label %81
32:
  %33 = load i32, i32* %9
  %34 = mul nsw i32 %33, 0
  %35 = icmp eq i32 %34, 0
  br i1 %35, label %36, label %77
36:
  store i32 1, i32* %10
  store i32 0, i32* %11
  br label %39
39:
  %40 = load i32, i32* %11
  %41 = load i32, i32* %7
  %42 = icmp slt i32 %40, %41
  br i1 %42, label %44, label %43
43:
  store i32 5, i32* %8
  br label %65
44:
  %45 = load i8*, i8** %4
  %46 = load i32, i32* %9
  %47 = load i32, i32* %11
  %48 = add nsw i32 %46, %47
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i8, i8* %45, i64 %49
  %51 = load i8, i8* %50
  %52 = sext i8 %51 to i32
  %53 = load i8*, i8** %5
  %54 = load i32, i32* %11
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %53, i64 %55
  %57 = load i8, i8* %56
  %58 = sext i8 %57 to i32
  %59 = icmp ne i32 %52, %58
  br i1 %59, label %60, label %61
60:
  store i32 0, i32* %10
  store i32 5, i32* %8
  br label %65
61:
  br label %62
62:
  %63 = load i32, i32* %11
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %11
  br label %39
65:
  br label %67
67:
  %68 = load i32, i32* %10
  %69 = icmp ne i32 %68, 0
  br i1 %69, label %70, label %72
70:
  %71 = load i32, i32* %9
  store i32 %71, i32* %3
  store i32 1, i32* %8
  br label %73
72:
  store i32 0, i32* %8
  br label %73
73:
  %75 = load i32, i32* %8
  switch i32 %75, label %81 [
    i32 0, label %76
  ]
76:
  br label %77
77:
  br label %78
78:
  %79 = load i32, i32* %9
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %9
  br label %25
81:
  %83 = load i32, i32* %8
  switch i32 %83, label %85 [
    i32 2, label %84
  ]
84:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %85
85:
  %88 = load i32, i32* %3
  ret i32 %88
}
declare i64 @strlen(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @SubStrFind(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
