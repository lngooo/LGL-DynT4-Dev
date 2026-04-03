@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @StrCmp(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  store i32 0, i32* %6
  store i32 0, i32* %6
  br label %10
10:
  %11 = load i8*, i8** %4
  %12 = load i32, i32* %6
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = icmp ne i32 %16, 0
  br i1 %17, label %18, label %63
18:
  store i32 0, i32* %7
  br label %20
20:
  %21 = load i32, i32* %7
  %22 = icmp slt i32 %21, 1
  br i1 %22, label %24, label %23
23:
  store i32 5, i32* %8
  br label %56
24:
  %25 = load i8*, i8** %4
  %26 = load i32, i32* %6
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = load i8*, i8** %5
  %32 = load i32, i32* %6
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = icmp ne i32 %30, %36
  br i1 %37, label %38, label %52
38:
  %39 = load i8*, i8** %4
  %40 = load i32, i32* %6
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  %43 = load i8, i8* %42
  %44 = zext i8 %43 to i32
  %45 = load i8*, i8** %5
  %46 = load i32, i32* %6
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  %49 = load i8, i8* %48
  %50 = zext i8 %49 to i32
  %51 = sub nsw i32 %44, %50
  store i32 %51, i32* %3
  store i32 1, i32* %8
  br label %56
52:
  br label %53
53:
  %54 = load i32, i32* %7
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %7
  br label %20
56:
  %58 = load i32, i32* %8
  switch i32 %58, label %77 [
    i32 5, label %59
  ]
59:
  br label %60
60:
  %61 = load i32, i32* %6
  %62 = add nsw i32 %61, 1
  store i32 %62, i32* %6
  br label %10
63:
  %64 = load i8*, i8** %4
  %65 = load i32, i32* %6
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i8, i8* %64, i64 %66
  %68 = load i8, i8* %67
  %69 = zext i8 %68 to i32
  %70 = load i8*, i8** %5
  %71 = load i32, i32* %6
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i8, i8* %70, i64 %72
  %74 = load i8, i8* %73
  %75 = zext i8 %74 to i32
  %76 = sub nsw i32 %69, %75
  store i32 %76, i32* %3
  store i32 1, i32* %8
  br label %77
77:
  %79 = load i32, i32* %3
  ret i32 %79
}
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
  %16 = call i32 @StrCmp(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
