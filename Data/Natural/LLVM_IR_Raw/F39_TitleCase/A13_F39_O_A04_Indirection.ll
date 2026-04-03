@.str = constant [3 x i8] c"%s\00"
define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8**
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i8*
  store i8* %0, i8** %2
  store i8** %2, i8*** %3
  store i32 1, i32* %4
  store i32 0, i32* %5
  br label %11
11:
  %12 = load i8**, i8*** %3
  %13 = load i8*, i8** %12
  %14 = load i32, i32* %5
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i8, i8* %13, i64 %15
  %17 = load i8, i8* %16
  %18 = icmp ne i8 %17, 0
  br i1 %18, label %21, label %19
19:
  store i32 2, i32* %6
  br label %73
21:
  %23 = load i8**, i8*** %3
  %24 = load i8*, i8** %23
  %25 = load i32, i32* %5
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  store i8* %27, i8** %7
  %28 = load i8*, i8** %7
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = icmp eq i32 %30, 32
  br i1 %31, label %32, label %33
32:
  store i32 1, i32* %4
  store i32 4, i32* %6
  br label %66
33:
  %34 = load i32, i32* %4
  %35 = icmp ne i32 %34, 0
  br i1 %35, label %36, label %48
36:
  %37 = load i8*, i8** %7
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = icmp sge i32 %39, 97
  br i1 %40, label %41, label %47
41:
  %42 = load i8*, i8** %7
  %43 = load i8, i8* %42
  %44 = sext i8 %43 to i32
  %45 = and i32 %44, 223
  %46 = trunc i32 %45 to i8
  store i8 %46, i8* %42
  br label %47
47:
  store i32 0, i32* %4
  br label %65
48:
  %49 = load i8*, i8** %7
  %50 = load i8, i8* %49
  %51 = sext i8 %50 to i32
  %52 = icmp sle i32 %51, 90
  br i1 %52, label %53, label %64
53:
  %54 = load i8*, i8** %7
  %55 = load i8, i8* %54
  %56 = sext i8 %55 to i32
  %57 = icmp sge i32 %56, 65
  br i1 %57, label %58, label %64
58:
  %59 = load i8*, i8** %7
  %60 = load i8, i8* %59
  %61 = sext i8 %60 to i32
  %62 = or i32 %61, 32
  %63 = trunc i32 %62 to i8
  store i8 %63, i8* %59
  br label %64
64:
  br label %65
65:
  store i32 0, i32* %6
  br label %66
66:
  %68 = load i32, i32* %6
  switch i32 %68, label %76 [
    i32 0, label %69
    i32 4, label %70
  ]
69:
  br label %70
70:
  %71 = load i32, i32* %5
  %72 = add nsw i32 %71, 1
  store i32 %72, i32* %5
  br label %11
73:
  ret void
76:
  unreachable
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %17
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @TitleCase(i8* %12)
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i8* %15)
  store i32 0, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
declare i32 @printf(i8*, ...)
