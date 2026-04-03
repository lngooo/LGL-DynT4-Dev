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
define dso_local void @tr_helper(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  br label %5
5:
  %6 = load i32, i32* %3
  %7 = icmp sle i32 %6, 0
  br i1 %7, label %8, label %9
8:
  ret void
9:
  %10 = load i32, i32* %3
  %11 = icmp sge i32 %10, 1000
  br i1 %11, label %12, label %17
12:
  %13 = load i8*, i8** %4
  %14 = call i8* @strcat(i8* %13, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  %15 = load i32, i32* %3
  %16 = sub nsw i32 %15, 1000
  store i32 %16, i32* %3
  br label %5
17:
  %18 = load i32, i32* %3
  %19 = icmp sge i32 %18, 900
  br i1 %19, label %20, label %25
20:
  %21 = load i8*, i8** %4
  %22 = call i8* @strcat(i8* %21, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i64 0, i64 0))
  %23 = load i32, i32* %3
  %24 = sub nsw i32 %23, 900
  store i32 %24, i32* %3
  br label %5
25:
  %26 = load i32, i32* %3
  %27 = icmp sge i32 %26, 500
  br i1 %27, label %28, label %33
28:
  %29 = load i8*, i8** %4
  %30 = call i8* @strcat(i8* %29, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0))
  %31 = load i32, i32* %3
  %32 = sub nsw i32 %31, 500
  store i32 %32, i32* %3
  br label %5
33:
  %34 = load i32, i32* %3
  %35 = icmp sge i32 %34, 400
  br i1 %35, label %36, label %41
36:
  %37 = load i8*, i8** %4
  %38 = call i8* @strcat(i8* %37, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.3, i64 0, i64 0))
  %39 = load i32, i32* %3
  %40 = sub nsw i32 %39, 400
  store i32 %40, i32* %3
  br label %5
41:
  %42 = load i32, i32* %3
  %43 = icmp sge i32 %42, 100
  br i1 %43, label %44, label %49
44:
  %45 = load i8*, i8** %4
  %46 = call i8* @strcat(i8* %45, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.4, i64 0, i64 0))
  %47 = load i32, i32* %3
  %48 = sub nsw i32 %47, 100
  store i32 %48, i32* %3
  br label %5
49:
  %50 = load i32, i32* %3
  %51 = icmp sge i32 %50, 90
  br i1 %51, label %52, label %57
52:
  %53 = load i8*, i8** %4
  %54 = call i8* @strcat(i8* %53, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.5, i64 0, i64 0))
  %55 = load i32, i32* %3
  %56 = sub nsw i32 %55, 90
  store i32 %56, i32* %3
  br label %5
57:
  %58 = load i32, i32* %3
  %59 = icmp sge i32 %58, 50
  br i1 %59, label %60, label %65
60:
  %61 = load i8*, i8** %4
  %62 = call i8* @strcat(i8* %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.6, i64 0, i64 0))
  %63 = load i32, i32* %3
  %64 = sub nsw i32 %63, 50
  store i32 %64, i32* %3
  br label %5
65:
  %66 = load i32, i32* %3
  %67 = icmp sge i32 %66, 40
  br i1 %67, label %68, label %73
68:
  %69 = load i8*, i8** %4
  %70 = call i8* @strcat(i8* %69, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.7, i64 0, i64 0))
  %71 = load i32, i32* %3
  %72 = sub nsw i32 %71, 40
  store i32 %72, i32* %3
  br label %5
73:
  %74 = load i32, i32* %3
  %75 = icmp sge i32 %74, 10
  br i1 %75, label %76, label %81
76:
  %77 = load i8*, i8** %4
  %78 = call i8* @strcat(i8* %77, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.8, i64 0, i64 0))
  %79 = load i32, i32* %3
  %80 = sub nsw i32 %79, 10
  store i32 %80, i32* %3
  br label %5
81:
  %82 = load i32, i32* %3
  %83 = icmp sge i32 %82, 9
  br i1 %83, label %84, label %89
84:
  %85 = load i8*, i8** %4
  %86 = call i8* @strcat(i8* %85, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.9, i64 0, i64 0))
  %87 = load i32, i32* %3
  %88 = sub nsw i32 %87, 9
  store i32 %88, i32* %3
  br label %5
89:
  %90 = load i32, i32* %3
  %91 = icmp sge i32 %90, 5
  br i1 %91, label %92, label %97
92:
  %93 = load i8*, i8** %4
  %94 = call i8* @strcat(i8* %93, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.10, i64 0, i64 0))
  %95 = load i32, i32* %3
  %96 = sub nsw i32 %95, 5
  store i32 %96, i32* %3
  br label %5
97:
  %98 = load i32, i32* %3
  %99 = icmp sge i32 %98, 4
  br i1 %99, label %100, label %105
100:
  %101 = load i8*, i8** %4
  %102 = call i8* @strcat(i8* %101, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.11, i64 0, i64 0))
  %103 = load i32, i32* %3
  %104 = sub nsw i32 %103, 4
  store i32 %104, i32* %3
  br label %5
105:
  %106 = load i8*, i8** %4
  %107 = call i8* @strcat(i8* %106, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.12, i64 0, i64 0))
  %108 = load i32, i32* %3
  %109 = sub nsw i32 %108, 1
  store i32 %109, i32* %3
  br label %5
}
declare i8* @strcat(i8*, i8*)
define dso_local void @IntToRoman(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %4
  %6 = getelementptr inbounds i8, i8* %5, i64 0
  store i8 0, i8* %6
  %7 = load i32, i32* %3
  %8 = load i8*, i8** %4
  call void @tr_helper(i32 %7, i8* %8)
  ret void
}
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
