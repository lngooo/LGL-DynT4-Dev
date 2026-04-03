@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @AnagramCheck(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca [256 x i8]
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %14 = load i8*, i8** %4
  %15 = call i64 @strlen(i8* %14)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %6
  %18 = load i8*, i8** %5
  %19 = call i64 @strlen(i8* %18)
  %20 = trunc i64 %19 to i32
  store i32 %20, i32* %7
  %21 = load i32, i32* %6
  %22 = load i32, i32* %7
  %23 = icmp ne i32 %21, %22
  br i1 %23, label %24, label %25
24:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %85
25:
  %27 = getelementptr inbounds [256 x i8], [256 x i8]* %9, i64 0, i64 0
  %28 = load i8*, i8** %5
  %29 = call i8* @strcpy(i8* %27, i8* %28)
  store i32 0, i32* %10
  br label %31
31:
  %32 = load i32, i32* %10
  %33 = load i32, i32* %6
  %34 = icmp slt i32 %32, %33
  br i1 %34, label %36, label %35
35:
  store i32 2, i32* %8
  br label %79
36:
  store i32 0, i32* %11
  store i32 0, i32* %12
  br label %39
39:
  %40 = load i32, i32* %12
  %41 = load i32, i32* %7
  %42 = icmp slt i32 %40, %41
  br i1 %42, label %44, label %43
43:
  store i32 5, i32* %8
  br label %65
44:
  %45 = load i8*, i8** %4
  %46 = load i32, i32* %10
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = load i32, i32* %12
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds [256 x i8], [256 x i8]* %9, i64 0, i64 %52
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = icmp eq i32 %50, %55
  br i1 %56, label %57, label %61
57:
  %58 = load i32, i32* %12
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds [256 x i8], [256 x i8]* %9, i64 0, i64 %59
  store i8 0, i8* %60
  store i32 1, i32* %11
  store i32 5, i32* %8
  br label %65
61:
  br label %62
62:
  %63 = load i32, i32* %12
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %12
  br label %39
65:
  br label %67
67:
  %68 = load i32, i32* %11
  %69 = icmp ne i32 %68, 0
  br i1 %69, label %71, label %70
70:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %72
71:
  store i32 0, i32* %8
  br label %72
72:
  %74 = load i32, i32* %8
  switch i32 %74, label %79 [
    i32 0, label %75
  ]
75:
  br label %76
76:
  %77 = load i32, i32* %10
  %78 = add nsw i32 %77, 1
  store i32 %78, i32* %10
  br label %31
79:
  %81 = load i32, i32* %8
  switch i32 %81, label %83 [
    i32 2, label %82
  ]
82:
  store i32 1, i32* %3
  store i32 1, i32* %8
  br label %83
83:
  br label %85
85:
  %88 = load i32, i32* %3
  ret i32 %88
}
declare i64 @strlen(i8*)
declare i8* @strcpy(i8*, i8*)
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
  %16 = call i32 @AnagramCheck(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
