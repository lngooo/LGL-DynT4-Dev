@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @tr(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %6 = load i8*, i8** %3
  %7 = load i32, i32* %4
  %8 = sext i32 %7 to i64
  %9 = getelementptr inbounds i8, i8* %6, i64 %8
  %10 = load i8, i8* %9
  %11 = icmp ne i8 %10, 0
  br i1 %11, label %13, label %12
12:
  br label %48
13:
  store i32 1, i32* %5
  br label %15
15:
  %16 = load i8*, i8** %3
  %17 = load i32, i32* %4
  %18 = load i32, i32* %5
  %19 = add nsw i32 %17, %18
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %16, i64 %20
  %22 = load i8, i8* %21
  %23 = sext i8 %22 to i32
  %24 = load i8*, i8** %3
  %25 = load i32, i32* %4
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = icmp eq i32 %23, %29
  br i1 %30, label %31, label %34
31:
  %32 = load i32, i32* %5
  %33 = add nsw i32 %32, 1
  store i32 %33, i32* %5
  br label %15
34:
  %35 = load i8*, i8** %3
  %36 = load i32, i32* %4
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = load i32, i32* %5
  %42 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %40, i32 %41)
  %43 = load i8*, i8** %3
  %44 = load i32, i32* %4
  %45 = load i32, i32* %5
  %46 = add nsw i32 %44, %45
  call void @tr(i8* %43, i32 %46)
  br label %48
48:
  ret void
}
declare i32 @printf(i8*, ...)
define dso_local void @StrCompress(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  call void @tr(i8* %3, i32 0)
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  ret void
}
