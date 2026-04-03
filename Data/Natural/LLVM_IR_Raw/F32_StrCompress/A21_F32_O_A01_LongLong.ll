@.str = constant [7 x i8] c"%c%lld\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @StrCompress(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i64
  %4 = alloca i64
  %5 = alloca i64
  store i8* %0, i8** %2
  %7 = load i8*, i8** %2
  %8 = call i64 @strlen(i8* %7)
  store i64 %8, i64* %3
  store i64 0, i64* %4
  br label %10
10:
  %11 = load i64, i64* %4
  %12 = load i64, i64* %3
  %13 = icmp slt i64 %11, %12
  br i1 %13, label %16, label %14
14:
  br label %55
16:
  store i64 1, i64* %5
  br label %18
18:
  %19 = load i64, i64* %4
  %20 = add nsw i64 %19, 1
  %21 = load i64, i64* %3
  %22 = icmp slt i64 %20, %21
  br i1 %22, label %23, label %36
23:
  %24 = load i8*, i8** %2
  %25 = load i64, i64* %4
  %26 = getelementptr inbounds i8, i8* %24, i64 %25
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = load i8*, i8** %2
  %30 = load i64, i64* %4
  %31 = add nsw i64 %30, 1
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = icmp eq i32 %28, %34
  br label %36
36:
  %37 = phi i1 [ false, %18 ], [ %35, %23 ]
  br i1 %37, label %38, label %43
38:
  %39 = load i64, i64* %5
  %40 = add nsw i64 %39, 1
  store i64 %40, i64* %5
  %41 = load i64, i64* %4
  %42 = add nsw i64 %41, 1
  store i64 %42, i64* %4
  br label %18
43:
  %44 = load i8*, i8** %2
  %45 = load i64, i64* %4
  %46 = getelementptr inbounds i8, i8* %44, i64 %45
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = load i64, i64* %5
  %50 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str, i64 0, i64 0), i32 %48, i64 %49)
  br label %52
52:
  %53 = load i64, i64* %4
  %54 = add nsw i64 %53, 1
  store i64 %54, i64* %4
  br label %10
55:
  %56 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  ret void
}
declare i64 @strlen(i8*)
declare i32 @printf(i8*, ...)
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
  br label %13
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @StrCompress(i8* %12)
  store i32 0, i32* %3
  br label %13
13:
  %14 = load i32, i32* %3
  ret i32 %14
}
