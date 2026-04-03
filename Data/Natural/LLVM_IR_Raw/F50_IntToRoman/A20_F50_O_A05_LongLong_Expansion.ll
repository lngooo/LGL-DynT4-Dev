@.str = constant [2 x i8] c"M\00"
@.str.1 = constant [3 x i8] c"CM\00"
@.str.2 = constant [2 x i8] c"D\00"
@.str.3 = constant [3 x i8] c"CD\00"
@.str.4 = constant [2 x i8] c"C\00"
@.str.5 = constant [3 x i8] c"XC\00"
@.str.6 = constant [2 x i8] c"L\00"
@.str.7 = constant [3 x i8] c"XL\00"
@.str.8 = constant [2 x i8] c"X\00"
@.str.9 = constant [3 x i8] c"IX\00"
@.str.10 = constant [2 x i8] c"V\00"
@.str.11 = constant [3 x i8] c"IV\00"
@.str.12 = constant [2 x i8] c"I\00"
@.str.13 = constant [4 x i8] c"%s\0A\00"
define dso_local void @IntToRoman(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i64
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %7 = load i32, i32* %3
  %8 = sext i32 %7 to i64
  store i64 %8, i64* %5
  %9 = load i8*, i8** %4
  %10 = getelementptr inbounds i8, i8* %9, i64 0
  store i8 0, i8* %10
  br label %11
11:
  %12 = load i64, i64* %5
  %13 = icmp sge i64 %12, 1000
  br i1 %13, label %14, label %19
14:
  %15 = load i8*, i8** %4
  %16 = call i8* @strcat(i8* %15, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  %17 = load i64, i64* %5
  %18 = sub nsw i64 %17, 1000
  store i64 %18, i64* %5
  br label %11
19:
  %20 = load i64, i64* %5
  %21 = icmp sge i64 %20, 900
  br i1 %21, label %22, label %27
22:
  %23 = load i8*, i8** %4
  %24 = call i8* @strcat(i8* %23, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i64 0, i64 0))
  %25 = load i64, i64* %5
  %26 = sub nsw i64 %25, 900
  store i64 %26, i64* %5
  br label %27
27:
  %28 = load i64, i64* %5
  %29 = icmp sge i64 %28, 500
  br i1 %29, label %30, label %35
30:
  %31 = load i8*, i8** %4
  %32 = call i8* @strcat(i8* %31, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0))
  %33 = load i64, i64* %5
  %34 = sub nsw i64 %33, 500
  store i64 %34, i64* %5
  br label %35
35:
  %36 = load i64, i64* %5
  %37 = icmp sge i64 %36, 400
  br i1 %37, label %38, label %43
38:
  %39 = load i8*, i8** %4
  %40 = call i8* @strcat(i8* %39, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.3, i64 0, i64 0))
  %41 = load i64, i64* %5
  %42 = sub nsw i64 %41, 400
  store i64 %42, i64* %5
  br label %43
43:
  br label %44
44:
  %45 = load i64, i64* %5
  %46 = icmp sge i64 %45, 100
  br i1 %46, label %47, label %52
47:
  %48 = load i8*, i8** %4
  %49 = call i8* @strcat(i8* %48, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.4, i64 0, i64 0))
  %50 = load i64, i64* %5
  %51 = sub nsw i64 %50, 100
  store i64 %51, i64* %5
  br label %44
52:
  %53 = load i64, i64* %5
  %54 = icmp sge i64 %53, 90
  br i1 %54, label %55, label %60
55:
  %56 = load i8*, i8** %4
  %57 = call i8* @strcat(i8* %56, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.5, i64 0, i64 0))
  %58 = load i64, i64* %5
  %59 = sub nsw i64 %58, 90
  store i64 %59, i64* %5
  br label %60
60:
  %61 = load i64, i64* %5
  %62 = icmp sge i64 %61, 50
  br i1 %62, label %63, label %68
63:
  %64 = load i8*, i8** %4
  %65 = call i8* @strcat(i8* %64, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.6, i64 0, i64 0))
  %66 = load i64, i64* %5
  %67 = sub nsw i64 %66, 50
  store i64 %67, i64* %5
  br label %68
68:
  %69 = load i64, i64* %5
  %70 = icmp sge i64 %69, 40
  br i1 %70, label %71, label %76
71:
  %72 = load i8*, i8** %4
  %73 = call i8* @strcat(i8* %72, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.7, i64 0, i64 0))
  %74 = load i64, i64* %5
  %75 = sub nsw i64 %74, 40
  store i64 %75, i64* %5
  br label %76
76:
  br label %77
77:
  %78 = load i64, i64* %5
  %79 = icmp sge i64 %78, 10
  br i1 %79, label %80, label %85
80:
  %81 = load i8*, i8** %4
  %82 = call i8* @strcat(i8* %81, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.8, i64 0, i64 0))
  %83 = load i64, i64* %5
  %84 = sub nsw i64 %83, 10
  store i64 %84, i64* %5
  br label %77
85:
  %86 = load i64, i64* %5
  %87 = icmp sge i64 %86, 9
  br i1 %87, label %88, label %93
88:
  %89 = load i8*, i8** %4
  %90 = call i8* @strcat(i8* %89, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.9, i64 0, i64 0))
  %91 = load i64, i64* %5
  %92 = sub nsw i64 %91, 9
  store i64 %92, i64* %5
  br label %93
93:
  %94 = load i64, i64* %5
  %95 = icmp sge i64 %94, 5
  br i1 %95, label %96, label %101
96:
  %97 = load i8*, i8** %4
  %98 = call i8* @strcat(i8* %97, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.10, i64 0, i64 0))
  %99 = load i64, i64* %5
  %100 = sub nsw i64 %99, 5
  store i64 %100, i64* %5
  br label %101
101:
  %102 = load i64, i64* %5
  %103 = icmp sge i64 %102, 4
  br i1 %103, label %104, label %109
104:
  %105 = load i8*, i8** %4
  %106 = call i8* @strcat(i8* %105, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.11, i64 0, i64 0))
  %107 = load i64, i64* %5
  %108 = sub nsw i64 %107, 4
  store i64 %108, i64* %5
  br label %109
109:
  br label %110
110:
  %111 = load i64, i64* %5
  %112 = icmp sge i64 %111, 1
  br i1 %112, label %113, label %118
113:
  %114 = load i8*, i8** %4
  %115 = call i8* @strcat(i8* %114, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.12, i64 0, i64 0))
  %116 = load i64, i64* %5
  %117 = sub nsw i64 %116, 1
  store i64 %117, i64* %5
  br label %110
118:
  ret void
}
declare i8* @strcat(i8*, i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca [100 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %20
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i32 @atoi(i8* %14)
  %16 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 0
  call void @IntToRoman(i32 %15, i8* %16)
  %17 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 0
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.13, i64 0, i64 0), i8* %17)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
