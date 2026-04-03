@.str = constant [3 x i8] c"%s\00"
define dso_local void @bGO(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i32
  store i8* %0, i8** %2
  %6 = load i8*, i8** %2
  store i8* %6, i8** %3
  store i32 1, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %3
  %10 = load i8, i8* %9
  %11 = icmp ne i8 %10, 0
  br i1 %11, label %15, label %12
12:
  ret void
15:
  %16 = load i8*, i8** %3
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = icmp eq i32 %18, 32
  br i1 %19, label %20, label %21
20:
  store i32 1, i32* %4
  br label %54
21:
  %22 = load i32, i32* %4
  %23 = icmp ne i32 %22, 0
  br i1 %23, label %24, label %36
24:
  %25 = load i8*, i8** %3
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = icmp sge i32 %27, 97
  br i1 %28, label %29, label %35
29:
  %30 = load i8*, i8** %3
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = sub nsw i32 %32, 32
  %34 = trunc i32 %33 to i8
  store i8 %34, i8* %30
  br label %35
35:
  store i32 0, i32* %4
  br label %53
36:
  %37 = load i8*, i8** %3
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = icmp sle i32 %39, 90
  br i1 %40, label %41, label %52
41:
  %42 = load i8*, i8** %3
  %43 = load i8, i8* %42
  %44 = sext i8 %43 to i32
  %45 = icmp sge i32 %44, 65
  br i1 %45, label %46, label %52
46:
  %47 = load i8*, i8** %3
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = add nsw i32 %49, 32
  %51 = trunc i32 %50 to i8
  store i8 %51, i8* %47
  br label %52
52:
  br label %53
53:
  br label %54
54:
  %55 = load i8*, i8** %3
  %56 = getelementptr inbounds i8, i8* %55, i32 1
  store i8* %56, i8** %3
  br label %8
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
  call void @bGO(i8* %12)
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
