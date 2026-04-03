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
  br label %112
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
  %35 = load i32, i32* %9
  %36 = load i8*, i8** %5
  %37 = load i32, i32* %10
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %36, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = xor i32 %35, %41
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
  %53 = add nsw i32 %52, 1
  %54 = xor i32 %49, %53
  %55 = icmp ne i32 %54, 0
  br i1 %55, label %57, label %56
56:
  store i32 5, i32* %8
  br label %106
57:
  store i32 0, i32* %12
  store i32 0, i32* %13
  br label %60
60:
  %61 = load i32, i32* %13
  %62 = load i32, i32* %7
  %63 = icmp slt i32 %61, %62
  br i1 %63, label %66, label %64
64:
  store i32 8, i32* %8
  br label %80
66:
  %67 = load i32, i32* %12
  %68 = load i8*, i8** %4
  %69 = load i32, i32* %11
  %70 = load i32, i32* %13
  %71 = add nsw i32 %69, %70
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i8, i8* %68, i64 %72
  %74 = load i8, i8* %73
  %75 = sext i8 %74 to i32
  %76 = xor i32 %67, %75
  store i32 %76, i32* %12
  br label %77
77:
  %78 = load i32, i32* %13
  %79 = add nsw i32 %78, 1
  store i32 %79, i32* %13
  br label %60
80:
  %81 = load i32, i32* %12
  %82 = load i32, i32* %9
  %83 = xor i32 %81, %82
  %84 = icmp ne i32 %83, 0
  br i1 %84, label %98, label %85
85:
  %86 = load i8*, i8** %4
  %87 = load i32, i32* %11
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i8, i8* %86, i64 %88
  %90 = load i8*, i8** %5
  %91 = load i32, i32* %7
  %92 = sext i32 %91 to i64
  %93 = call i32 @memcmp(i8* %89, i8* %90, i64 %92)
  %94 = icmp eq i32 %93, 0
  br i1 %94, label %95, label %97
95:
  %96 = load i32, i32* %11
  store i32 %96, i32* %3
  store i32 1, i32* %8
  br label %99
97:
  br label %98
98:
  store i32 0, i32* %8
  br label %99
99:
  %101 = load i32, i32* %8
  switch i32 %101, label %106 [
    i32 0, label %102
  ]
102:
  br label %103
103:
  %104 = load i32, i32* %11
  %105 = add nsw i32 %104, 1
  store i32 %105, i32* %11
  br label %48
106:
  %108 = load i32, i32* %8
  switch i32 %108, label %110 [
    i32 5, label %109
  ]
109:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %110
110:
  br label %112
112:
  %115 = load i32, i32* %3
  ret i32 %115
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
  %16 = call i32 @SubStrFind(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
