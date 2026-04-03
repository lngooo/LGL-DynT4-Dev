@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @url(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %15 = load i8*, i8** %4
  %16 = call i64 @strlen(i8* %15)
  %17 = trunc i64 %16 to i32
  store i32 %17, i32* %6
  %19 = load i8*, i8** %5
  %20 = call i64 @strlen(i8* %19)
  %21 = trunc i64 %20 to i32
  store i32 %21, i32* %7
  %22 = load i32, i32* %7
  %23 = icmp eq i32 %22, 0
  br i1 %23, label %24, label %25
24:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %109
25:
  store i32 0, i32* %9
  store i32 0, i32* %10
  br label %28
28:
  %29 = load i32, i32* %10
  %30 = load i32, i32* %7
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %34, label %32
32:
  store i32 2, i32* %8
  br label %46
34:
  %35 = load i8*, i8** %5
  %36 = load i32, i32* %10
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = load i32, i32* %9
  %42 = xor i32 %41, %40
  store i32 %42, i32* %9
  br label %43
43:
  %44 = load i32, i32* %10
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %10
  br label %28
46:
  store i32 0, i32* %11
  br label %48
48:
  %49 = load i32, i32* %11
  %50 = load i32, i32* %6
  %51 = load i32, i32* %7
  %52 = sub nsw i32 %50, %51
  %53 = icmp sle i32 %49, %52
  br i1 %53, label %55, label %54
54:
  store i32 5, i32* %8
  br label %103
55:
  store i32 0, i32* %12
  store i32 0, i32* %13
  br label %58
58:
  %59 = load i32, i32* %13
  %60 = load i32, i32* %7
  %61 = icmp slt i32 %59, %60
  br i1 %61, label %64, label %62
62:
  store i32 8, i32* %8
  br label %78
64:
  %65 = load i8*, i8** %4
  %66 = load i32, i32* %11
  %67 = load i32, i32* %13
  %68 = add nsw i32 %66, %67
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i8, i8* %65, i64 %69
  %71 = load i8, i8* %70
  %72 = sext i8 %71 to i32
  %73 = load i32, i32* %12
  %74 = xor i32 %73, %72
  store i32 %74, i32* %12
  br label %75
75:
  %76 = load i32, i32* %13
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %13
  br label %58
78:
  %79 = load i32, i32* %12
  %80 = load i32, i32* %9
  %81 = icmp eq i32 %79, %80
  br i1 %81, label %82, label %95
82:
  %83 = load i8*, i8** %4
  %84 = load i32, i32* %11
  %85 = sext i32 %84 to i64
  %86 = getelementptr inbounds i8, i8* %83, i64 %85
  %87 = load i8*, i8** %5
  %88 = load i32, i32* %7
  %89 = sext i32 %88 to i64
  %90 = call i32 @memcmp(i8* %86, i8* %87, i64 %89)
  %91 = icmp eq i32 %90, 0
  br i1 %91, label %92, label %94
92:
  %93 = load i32, i32* %11
  store i32 %93, i32* %3
  store i32 1, i32* %8
  br label %96
94:
  br label %95
95:
  store i32 0, i32* %8
  br label %96
96:
  %98 = load i32, i32* %8
  switch i32 %98, label %103 [
    i32 0, label %99
  ]
99:
  br label %100
100:
  %101 = load i32, i32* %11
  %102 = add nsw i32 %101, 1
  store i32 %102, i32* %11
  br label %48
103:
  %105 = load i32, i32* %8
  switch i32 %105, label %107 [
    i32 5, label %106
  ]
106:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %107
107:
  br label %109
109:
  %112 = load i32, i32* %3
  ret i32 %112
}
declare i64 @strlen(i8*)
declare i32 @memcmp(i8*, i8*, i64)
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
  %16 = call i32 @url(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
