@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @TrimSpace(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [4096 x i8]
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i8*, i8** %2
  %11 = load i32, i32* %5
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %18, label %16
16:
  br label %64
18:
  %19 = load i8*, i8** %2
  %20 = load i32, i32* %5
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = icmp ne i32 %24, 32
  br i1 %25, label %26, label %60
26:
  %27 = load i8*, i8** %2
  %28 = load i32, i32* %5
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = icmp ne i32 %32, 9
  br i1 %33, label %34, label %60
34:
  %35 = load i8*, i8** %2
  %36 = load i32, i32* %5
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = icmp ne i32 %40, 10
  br i1 %41, label %42, label %60
42:
  %43 = load i8*, i8** %2
  %44 = load i32, i32* %5
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i8, i8* %43, i64 %45
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = icmp ne i32 %48, 13
  br i1 %49, label %50, label %60
50:
  %51 = load i8*, i8** %2
  %52 = load i32, i32* %5
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i8, i8* %51, i64 %53
  %55 = load i8, i8* %54
  %56 = load i32, i32* %4
  %57 = add nsw i32 %56, 1
  store i32 %57, i32* %4
  %58 = sext i32 %56 to i64
  %59 = getelementptr inbounds [4096 x i8], [4096 x i8]* %3, i64 0, i64 %58
  store i8 %55, i8* %59
  br label %60
60:
  br label %61
61:
  %62 = load i32, i32* %5
  %63 = add nsw i32 %62, 1
  store i32 %63, i32* %5
  br label %9
64:
  %65 = load i32, i32* %4
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds [4096 x i8], [4096 x i8]* %3, i64 0, i64 %66
  store i8 0, i8* %67
  %68 = load i8*, i8** %2
  %69 = getelementptr inbounds [4096 x i8], [4096 x i8]* %3, i64 0, i64 0
  %70 = call i8* @strcpy(i8* %68, i8* %69)
  ret void
}
declare i8* @strcpy(i8*, i8*)
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
  call void @TrimSpace(i8* %12)
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
