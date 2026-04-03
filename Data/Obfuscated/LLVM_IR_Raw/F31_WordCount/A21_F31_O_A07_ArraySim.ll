@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @E(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca [1024 x i32]
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %3
  %11 = load i8*, i8** %3
  %12 = call i64 @strlen(i8* %11)
  %13 = trunc i64 %12 to i32
  store i32 %13, i32* %4
  %14 = load i32, i32* %4
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %16, label %17
16:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %87
17:
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %21
21:
  %22 = load i32, i32* %8
  %23 = load i32, i32* %4
  %24 = icmp slt i32 %22, %23
  br i1 %24, label %27, label %25
25:
  store i32 2, i32* %5
  br label %52
27:
  %28 = load i8*, i8** %3
  %29 = load i32, i32* %8
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  %33 = sext i8 %32 to i32
  %34 = icmp eq i32 %33, 32
  br i1 %34, label %43, label %35
35:
  %36 = load i8*, i8** %3
  %37 = load i32, i32* %8
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %36, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = icmp eq i32 %41, 9
  br label %43
43:
  %44 = phi i1 [ true, %27 ], [ %42, %35 ]
  %45 = zext i1 %44 to i32
  %46 = load i32, i32* %8
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds [1024 x i32], [1024 x i32]* %6, i64 0, i64 %47
  store i32 %45, i32* %48
  br label %49
49:
  %50 = load i32, i32* %8
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %8
  br label %21
52:
  store i32 0, i32* %9
  br label %54
54:
  %55 = load i32, i32* %9
  %56 = load i32, i32* %4
  %57 = icmp slt i32 %55, %56
  br i1 %57, label %60, label %58
58:
  store i32 5, i32* %5
  br label %83
60:
  %61 = load i32, i32* %9
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds [1024 x i32], [1024 x i32]* %6, i64 0, i64 %62
  %64 = load i32, i32* %63
  %65 = icmp ne i32 %64, 0
  br i1 %65, label %79, label %66
66:
  %67 = load i32, i32* %9
  %68 = icmp eq i32 %67, 0
  br i1 %68, label %76, label %69
69:
  %70 = load i32, i32* %9
  %71 = sub nsw i32 %70, 1
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds [1024 x i32], [1024 x i32]* %6, i64 0, i64 %72
  %74 = load i32, i32* %73
  %75 = icmp ne i32 %74, 0
  br i1 %75, label %76, label %79
76:
  %77 = load i32, i32* %7
  %78 = add nsw i32 %77, 1
  store i32 %78, i32* %7
  br label %79
79:
  br label %80
80:
  %81 = load i32, i32* %9
  %82 = add nsw i32 %81, 1
  store i32 %82, i32* %9
  br label %54
83:
  %84 = load i32, i32* %7
  store i32 %84, i32* %2
  store i32 1, i32* %5
  br label %87
87:
  %89 = load i32, i32* %2
  ret i32 %89
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
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @E(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
