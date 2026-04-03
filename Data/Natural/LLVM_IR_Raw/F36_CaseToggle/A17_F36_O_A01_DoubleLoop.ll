@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @CaseToggle(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %8
8:
  %9 = load i8*, i8** %2
  %10 = load i32, i32* %3
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i8, i8* %9, i64 %11
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %17, label %15
15:
  store i32 2, i32* %4
  br label %72
17:
  store i32 0, i32* %5
  br label %19
19:
  %20 = load i32, i32* %5
  %21 = icmp slt i32 %20, 1
  br i1 %21, label %24, label %22
22:
  store i32 5, i32* %4
  br label %68
24:
  %25 = load i8*, i8** %2
  %26 = load i32, i32* %3
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  %29 = load i8, i8* %28
  store i8 %29, i8* %6
  %30 = load i8, i8* %6
  %31 = sext i8 %30 to i32
  %32 = icmp sge i32 %31, 97
  br i1 %32, label %33, label %46
33:
  %34 = load i8, i8* %6
  %35 = sext i8 %34 to i32
  %36 = icmp sle i32 %35, 122
  br i1 %36, label %37, label %46
37:
  %38 = load i8, i8* %6
  %39 = sext i8 %38 to i32
  %40 = sub nsw i32 %39, 32
  %41 = trunc i32 %40 to i8
  %42 = load i8*, i8** %2
  %43 = load i32, i32* %3
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8, i8* %42, i64 %44
  store i8 %41, i8* %45
  br label %64
46:
  %47 = load i8, i8* %6
  %48 = sext i8 %47 to i32
  %49 = icmp sge i32 %48, 65
  br i1 %49, label %50, label %63
50:
  %51 = load i8, i8* %6
  %52 = sext i8 %51 to i32
  %53 = icmp sle i32 %52, 90
  br i1 %53, label %54, label %63
54:
  %55 = load i8, i8* %6
  %56 = sext i8 %55 to i32
  %57 = add nsw i32 %56, 32
  %58 = trunc i32 %57 to i8
  %59 = load i8*, i8** %2
  %60 = load i32, i32* %3
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i8, i8* %59, i64 %61
  store i8 %58, i8* %62
  br label %63
63:
  br label %64
64:
  br label %65
65:
  %66 = load i32, i32* %5
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %5
  br label %19
68:
  br label %69
69:
  %70 = load i32, i32* %3
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %3
  br label %8
72:
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
