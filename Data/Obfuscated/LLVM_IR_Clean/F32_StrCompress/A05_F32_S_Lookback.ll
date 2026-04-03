@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @J3(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8
  %7 = alloca i32
  store i8* %0, i8** %2
  %9 = load i8*, i8** %2
  %10 = call i64 @strlen(i8* %9)
  %11 = trunc i64 %10 to i32
  store i32 %11, i32* %3
  %12 = load i32, i32* %3
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %14, label %15
14:
  store i32 1, i32* %4
  br label %57
15:
  store i32 1, i32* %5
  %17 = load i8*, i8** %2
  %18 = getelementptr inbounds i8, i8* %17, i64 0
  %19 = load i8, i8* %18
  store i8 %19, i8* %6
  store i32 1, i32* %7
  br label %21
21:
  %22 = load i32, i32* %7
  %23 = load i32, i32* %3
  %24 = icmp sle i32 %22, %23
  br i1 %24, label %27, label %25
25:
  store i32 2, i32* %4
  br label %54
27:
  %28 = load i8*, i8** %2
  %29 = load i32, i32* %7
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  %33 = sext i8 %32 to i32
  %34 = load i8, i8* %6
  %35 = sext i8 %34 to i32
  %36 = icmp eq i32 %33, %35
  br i1 %36, label %37, label %40
37:
  %38 = load i32, i32* %5
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %5
  br label %50
40:
  %41 = load i8, i8* %6
  %42 = sext i8 %41 to i32
  %43 = load i32, i32* %5
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %42, i32 %43)
  %45 = load i8*, i8** %2
  %46 = load i32, i32* %7
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i8, i8* %45, i64 %47
  %49 = load i8, i8* %48
  store i8 %49, i8* %6
  store i32 1, i32* %5
  br label %50
50:
  br label %51
51:
  %52 = load i32, i32* %7
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %7
  br label %21
54:
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  store i32 0, i32* %4
  br label %57
57:
  %59 = load i32, i32* %4
  switch i32 %59, label %61 [
    i32 0, label %60
    i32 1, label %60
  ]
60:
  ret void
61:
  unreachable
}
declare i64 @strlen(i8*)
declare i32 @printf(i8*, ...)
