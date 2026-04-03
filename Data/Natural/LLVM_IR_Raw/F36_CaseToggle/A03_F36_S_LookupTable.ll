@CaseToggle.map = internal global [256 x i8] zeroinitializer
@CaseToggle.init = internal global i32 0
@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @CaseToggle(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  %4 = load i32, i32* @CaseToggle.init
  %5 = icmp ne i32 %4, 0
  br i1 %5, label %51, label %6
6:
  store i32 0, i32* %3
  br label %8
8:
  %9 = load i32, i32* %3
  %10 = icmp slt i32 %9, 256
  br i1 %10, label %13, label %11
11:
  br label %50
13:
  %14 = load i32, i32* %3
  %15 = icmp sge i32 %14, 97
  br i1 %15, label %16, label %26
16:
  %17 = load i32, i32* %3
  %18 = icmp sle i32 %17, 122
  br i1 %18, label %19, label %26
19:
  %20 = load i32, i32* %3
  %21 = sub nsw i32 %20, 32
  %22 = trunc i32 %21 to i8
  %23 = load i32, i32* %3
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds [256 x i8], [256 x i8]* @CaseToggle.map, i64 0, i64 %24
  store i8 %22, i8* %25
  br label %46
26:
  %27 = load i32, i32* %3
  %28 = icmp sge i32 %27, 65
  br i1 %28, label %29, label %39
29:
  %30 = load i32, i32* %3
  %31 = icmp sle i32 %30, 90
  br i1 %31, label %32, label %39
32:
  %33 = load i32, i32* %3
  %34 = add nsw i32 %33, 32
  %35 = trunc i32 %34 to i8
  %36 = load i32, i32* %3
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds [256 x i8], [256 x i8]* @CaseToggle.map, i64 0, i64 %37
  store i8 %35, i8* %38
  br label %45
39:
  %40 = load i32, i32* %3
  %41 = trunc i32 %40 to i8
  %42 = load i32, i32* %3
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds [256 x i8], [256 x i8]* @CaseToggle.map, i64 0, i64 %43
  store i8 %41, i8* %44
  br label %45
45:
  br label %46
46:
  br label %47
47:
  %48 = load i32, i32* %3
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %3
  br label %8
50:
  store i32 1, i32* @CaseToggle.init
  br label %51
51:
  br label %52
52:
  %53 = load i8*, i8** %2
  %54 = load i8, i8* %53
  %55 = icmp ne i8 %54, 0
  br i1 %55, label %56, label %65
56:
  %57 = load i8*, i8** %2
  %58 = load i8, i8* %57
  %59 = zext i8 %58 to i64
  %60 = getelementptr inbounds [256 x i8], [256 x i8]* @CaseToggle.map, i64 0, i64 %59
  %61 = load i8, i8* %60
  %62 = load i8*, i8** %2
  store i8 %61, i8* %62
  %63 = load i8*, i8** %2
  %64 = getelementptr inbounds i8, i8* %63, i32 1
  store i8* %64, i8** %2
  br label %52
65:
  ret void
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
