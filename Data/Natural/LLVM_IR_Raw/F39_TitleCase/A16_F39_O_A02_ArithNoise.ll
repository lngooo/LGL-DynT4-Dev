@.str = constant [3 x i8] c"%s\00"
define dso_local void @TitleCase(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  %7 = load i8*, i8** %2
  store i8* %7, i8** %3
  store i32 1, i32* %4
  br label %9
9:
  %10 = load i8*, i8** %3
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %13, label %66
13:
  %15 = load i8*, i8** %3
  %16 = load i8*, i8** %2
  %17 = ptrtoint i8* %15 to i64
  %18 = ptrtoint i8* %16 to i64
  %19 = sub i64 %17, %18
  %20 = mul nsw i64 %19, 2
  %21 = trunc i64 %20 to i32
  store i32 %21, i32* %5
  %22 = load i8*, i8** %3
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = icmp eq i32 %24, 32
  br i1 %25, label %26, label %27
26:
  store i32 1, i32* %4
  br label %62
27:
  %28 = load i32, i32* %4
  %29 = icmp ne i32 %28, 0
  br i1 %29, label %30, label %43
30:
  %31 = load i8*, i8** %3
  %32 = load i8, i8* %31
  %33 = sext i8 %32 to i32
  %34 = icmp sge i32 %33, 97
  br i1 %34, label %35, label %42
35:
  %36 = load i8*, i8** %3
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = sub nsw i32 %38, 32
  %40 = trunc i32 %39 to i8
  %41 = load i8*, i8** %3
  store i8 %40, i8* %41
  br label %42
42:
  store i32 0, i32* %4
  br label %61
43:
  %44 = load i8*, i8** %3
  %45 = load i8, i8* %44
  %46 = sext i8 %45 to i32
  %47 = icmp sge i32 %46, 65
  br i1 %47, label %48, label %60
48:
  %49 = load i8*, i8** %3
  %50 = load i8, i8* %49
  %51 = sext i8 %50 to i32
  %52 = icmp sle i32 %51, 90
  br i1 %52, label %53, label %60
53:
  %54 = load i8*, i8** %3
  %55 = load i8, i8* %54
  %56 = sext i8 %55 to i32
  %57 = add nsw i32 %56, 32
  %58 = trunc i32 %57 to i8
  %59 = load i8*, i8** %3
  store i8 %58, i8* %59
  br label %60
60:
  br label %61
61:
  br label %62
62:
  %63 = load i8*, i8** %3
  %64 = getelementptr inbounds i8, i8* %63, i64 1
  store i8* %64, i8** %3
  br label %9
66:
  ret void
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
