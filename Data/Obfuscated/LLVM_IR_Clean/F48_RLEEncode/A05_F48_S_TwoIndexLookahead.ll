@.str = constant [3 x i8] c"%d\00"
define dso_local void @OxQk3(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca [12 x i8]
  %10 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %14
14:
  %15 = load i8*, i8** %3
  %16 = load i32, i32* %6
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = icmp ne i8 %19, 0
  br i1 %20, label %24, label %21
21:
  store i32 2, i32* %8
  br label %95
24:
  br label %25
25:
  %26 = load i8*, i8** %3
  %27 = load i32, i32* %7
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i8, i8* %26, i64 %28
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = icmp ne i32 %31, 0
  br i1 %32, label %33, label %47
33:
  %34 = load i8*, i8** %3
  %35 = load i32, i32* %7
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %34, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = load i8*, i8** %3
  %41 = load i32, i32* %6
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = icmp eq i32 %39, %45
  br label %47
47:
  %48 = phi i1 [ false, %25 ], [ %46, %33 ]
  br i1 %48, label %49, label %52
49:
  %50 = load i32, i32* %7
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %7
  br label %25
52:
  %53 = load i8*, i8** %3
  %54 = load i32, i32* %6
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %53, i64 %55
  %57 = load i8, i8* %56
  %58 = load i8*, i8** %4
  %59 = load i32, i32* %5
  %60 = add nsw i32 %59, 1
  store i32 %60, i32* %5
  %61 = sext i32 %59 to i64
  %62 = getelementptr inbounds i8, i8* %58, i64 %61
  store i8 %57, i8* %62
  %64 = getelementptr inbounds [12 x i8], [12 x i8]* %9, i64 0, i64 0
  %65 = load i32, i32* %7
  %66 = load i32, i32* %6
  %67 = sub nsw i32 %65, %66
  %68 = call i32 (i8*, i8*, ...) @sprintf(i8* %64, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %67)
  store i32 0, i32* %10
  br label %70
70:
  %71 = load i32, i32* %10
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds [12 x i8], [12 x i8]* %9, i64 0, i64 %72
  %74 = load i8, i8* %73
  %75 = icmp ne i8 %74, 0
  br i1 %75, label %78, label %76
76:
  store i32 7, i32* %8
  br label %91
78:
  %79 = load i32, i32* %10
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds [12 x i8], [12 x i8]* %9, i64 0, i64 %80
  %82 = load i8, i8* %81
  %83 = load i8*, i8** %4
  %84 = load i32, i32* %5
  %85 = add nsw i32 %84, 1
  store i32 %85, i32* %5
  %86 = sext i32 %84 to i64
  %87 = getelementptr inbounds i8, i8* %83, i64 %86
  store i8 %82, i8* %87
  br label %88
88:
  %89 = load i32, i32* %10
  %90 = add nsw i32 %89, 1
  store i32 %90, i32* %10
  br label %70
91:
  br label %93
93:
  %94 = load i32, i32* %7
  store i32 %94, i32* %6
  br label %14
95:
  %96 = load i8*, i8** %4
  %97 = load i32, i32* %5
  %98 = sext i32 %97 to i64
  %99 = getelementptr inbounds i8, i8* %96, i64 %98
  store i8 0, i8* %99
  ret void
}
declare i32 @sprintf(i8*, i8*, ...)
