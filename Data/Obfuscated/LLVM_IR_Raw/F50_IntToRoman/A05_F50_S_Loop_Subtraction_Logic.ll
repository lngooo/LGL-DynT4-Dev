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
define dso_local void @nao2(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %4
  %6 = getelementptr inbounds i8, i8* %5, i64 0
  store i8 0, i8* %6
  br label %7
7:
  %8 = load i32, i32* %3
  %9 = icmp sge i32 %8, 1000
  br i1 %9, label %10, label %15
10:
  %11 = load i8*, i8** %4
  %12 = call i8* @strcat(i8* %11, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  %13 = load i32, i32* %3
  %14 = sub nsw i32 %13, 1000
  store i32 %14, i32* %3
  br label %7
15:
  %16 = load i32, i32* %3
  %17 = icmp sge i32 %16, 900
  br i1 %17, label %18, label %23
18:
  %19 = load i8*, i8** %4
  %20 = call i8* @strcat(i8* %19, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i64 0, i64 0))
  %21 = load i32, i32* %3
  %22 = sub nsw i32 %21, 900
  store i32 %22, i32* %3
  br label %23
23:
  %24 = load i32, i32* %3
  %25 = icmp sge i32 %24, 500
  br i1 %25, label %26, label %31
26:
  %27 = load i8*, i8** %4
  %28 = call i8* @strcat(i8* %27, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i64 0, i64 0))
  %29 = load i32, i32* %3
  %30 = sub nsw i32 %29, 500
  store i32 %30, i32* %3
  br label %31
31:
  %32 = load i32, i32* %3
  %33 = icmp sge i32 %32, 400
  br i1 %33, label %34, label %39
34:
  %35 = load i8*, i8** %4
  %36 = call i8* @strcat(i8* %35, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.3, i64 0, i64 0))
  %37 = load i32, i32* %3
  %38 = sub nsw i32 %37, 400
  store i32 %38, i32* %3
  br label %39
39:
  br label %40
40:
  %41 = load i32, i32* %3
  %42 = icmp sge i32 %41, 100
  br i1 %42, label %43, label %48
43:
  %44 = load i8*, i8** %4
  %45 = call i8* @strcat(i8* %44, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.4, i64 0, i64 0))
  %46 = load i32, i32* %3
  %47 = sub nsw i32 %46, 100
  store i32 %47, i32* %3
  br label %40
48:
  %49 = load i32, i32* %3
  %50 = icmp sge i32 %49, 90
  br i1 %50, label %51, label %56
51:
  %52 = load i8*, i8** %4
  %53 = call i8* @strcat(i8* %52, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.5, i64 0, i64 0))
  %54 = load i32, i32* %3
  %55 = sub nsw i32 %54, 90
  store i32 %55, i32* %3
  br label %56
56:
  %57 = load i32, i32* %3
  %58 = icmp sge i32 %57, 50
  br i1 %58, label %59, label %64
59:
  %60 = load i8*, i8** %4
  %61 = call i8* @strcat(i8* %60, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.6, i64 0, i64 0))
  %62 = load i32, i32* %3
  %63 = sub nsw i32 %62, 50
  store i32 %63, i32* %3
  br label %64
64:
  %65 = load i32, i32* %3
  %66 = icmp sge i32 %65, 40
  br i1 %66, label %67, label %72
67:
  %68 = load i8*, i8** %4
  %69 = call i8* @strcat(i8* %68, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.7, i64 0, i64 0))
  %70 = load i32, i32* %3
  %71 = sub nsw i32 %70, 40
  store i32 %71, i32* %3
  br label %72
72:
  br label %73
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
  br label %73
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
  br label %89
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
  br label %97
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
  br label %105
105:
  br label %106
106:
  %107 = load i32, i32* %3
  %108 = icmp sge i32 %107, 1
  br i1 %108, label %109, label %114
109:
  %110 = load i8*, i8** %4
  %111 = call i8* @strcat(i8* %110, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.12, i64 0, i64 0))
  %112 = load i32, i32* %3
  %113 = sub nsw i32 %112, 1
  store i32 %113, i32* %3
  br label %106
114:
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
  call void @nao2(i32 %15, i8* %16)
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
