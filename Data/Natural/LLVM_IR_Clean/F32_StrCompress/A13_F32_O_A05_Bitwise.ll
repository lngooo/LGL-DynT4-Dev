@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @StrCompress(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %2
  %8 = load i8*, i8** %2
  %9 = call i64 @strlen(i8* %8)
  %10 = trunc i64 %9 to i32
  store i32 %10, i32* %3
  %11 = load i32, i32* %3
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i32 1, i32* %4
  br label %67
14:
  store i32 1, i32* %5
  store i32 1, i32* %6
  br label %17
17:
  %18 = load i32, i32* %6
  %19 = load i32, i32* %3
  %20 = icmp sle i32 %18, %19
  br i1 %20, label %23, label %21
21:
  store i32 2, i32* %4
  br label %64
23:
  %24 = load i8*, i8** %2
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = load i8*, i8** %2
  %31 = load i32, i32* %6
  %32 = sub nsw i32 %31, 1
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %30, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = xor i32 %29, %36
  %38 = icmp ne i32 %37, 0
  br i1 %38, label %50, label %39
39:
  %40 = load i8*, i8** %2
  %41 = load i32, i32* %6
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = icmp ne i32 %45, 0
  br i1 %46, label %47, label %50
47:
  %48 = load i32, i32* %5
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %5
  br label %60
50:
  %51 = load i8*, i8** %2
  %52 = load i32, i32* %6
  %53 = sub nsw i32 %52, 1
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %51, i64 %54
  %56 = load i8, i8* %55
  %57 = sext i8 %56 to i32
  %58 = load i32, i32* %5
  %59 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %57, i32 %58)
  store i32 1, i32* %5
  br label %60
60:
  br label %61
61:
  %62 = load i32, i32* %6
  %63 = add nsw i32 %62, 1
  store i32 %63, i32* %6
  br label %17
64:
  %65 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  store i32 0, i32* %4
  br label %67
67:
  %69 = load i32, i32* %4
  switch i32 %69, label %71 [
    i32 0, label %70
    i32 1, label %70
  ]
70:
  ret void
71:
  unreachable
}
declare i64 @strlen(i8*)
declare i32 @printf(i8*, ...)
