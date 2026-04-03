@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @CaseToggle(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i32, i32* %3
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %8, i64 %10
  %12 = load i8, i8* %11
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %14, label %83
14:
  %16 = load i32, i32* %3
  %17 = mul nsw i32 %16, 2
  store i32 %17, i32* %4
  %18 = load i8*, i8** %2
  %19 = load i32, i32* %3
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %18, i64 %20
  %22 = load i8, i8* %21
  %23 = sext i8 %22 to i32
  %24 = icmp sge i32 %23, 97
  br i1 %24, label %25, label %44
25:
  %26 = load i8*, i8** %2
  %27 = load i32, i32* %3
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i8, i8* %26, i64 %28
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = icmp sle i32 %31, 122
  br i1 %32, label %33, label %44
33:
  %34 = load i8*, i8** %2
  %35 = load i32, i32* %3
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %34, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = sub nsw i32 %39, 32
  %41 = trunc i32 %40 to i8
  store i8 %41, i8* %37
  %42 = load i32, i32* %4
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %4
  br label %72
44:
  %45 = load i8*, i8** %2
  %46 = load i32, i32* %3
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  %49 = load i8, i8* %48
  %50 = sext i8 %49 to i32
  %51 = icmp sge i32 %50, 65
  br i1 %51, label %52, label %71
52:
  %53 = load i8*, i8** %2
  %54 = load i32, i32* %3
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %53, i64 %55
  %57 = load i8, i8* %56
  %58 = sext i8 %57 to i32
  %59 = icmp sle i32 %58, 90
  br i1 %59, label %60, label %71
60:
  %61 = load i8*, i8** %2
  %62 = load i32, i32* %3
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i8, i8* %61, i64 %63
  %65 = load i8, i8* %64
  %66 = sext i8 %65 to i32
  %67 = add nsw i32 %66, 32
  %68 = trunc i32 %67 to i8
  store i8 %68, i8* %64
  %69 = load i32, i32* %4
  %70 = add nsw i32 %69, -1
  store i32 %70, i32* %4
  br label %71
71:
  br label %72
72:
  %73 = load i32, i32* %4
  %74 = icmp slt i32 %73, -1000
  br i1 %74, label %75, label %76
75:
  store i32 3, i32* %5
  br label %79
76:
  %77 = load i32, i32* %3
  %78 = add nsw i32 %77, 1
  store i32 %78, i32* %3
  store i32 0, i32* %5
  br label %79
79:
  %81 = load i32, i32* %5
  switch i32 %81, label %85 [
    i32 0, label %82
    i32 3, label %83
  ]
82:
  br label %7
83:
  ret void
85:
  unreachable
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
  call void @CaseToggle(i8* %12)
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %15)
  store i32 0, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
declare i32 @printf(i8*, ...)
