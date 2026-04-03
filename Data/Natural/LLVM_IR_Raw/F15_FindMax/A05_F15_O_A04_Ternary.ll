@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @m_r(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %11 = load i32, i32* %6
  %12 = load i32, i32* %7
  %13 = icmp eq i32 %11, %12
  br i1 %13, label %14, label %20
14:
  %15 = load i32*, i32** %5
  %16 = load i32, i32* %6
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i32, i32* %15, i64 %17
  %19 = load i32, i32* %18
  store i32 %19, i32* %4
  br label %51
20:
  %22 = load i32, i32* %6
  %23 = load i32, i32* %7
  %24 = load i32, i32* %6
  %25 = sub nsw i32 %23, %24
  %26 = sdiv i32 %25, 2
  %27 = add nsw i32 %22, %26
  store i32 %27, i32* %8
  %29 = load i32*, i32** %5
  %30 = load i32, i32* %6
  %31 = load i32, i32* %8
  %32 = call i32 @m_r(i32* %29, i32 %30, i32 %31)
  store i32 %32, i32* %9
  %34 = load i32*, i32** %5
  %35 = load i32, i32* %8
  %36 = add nsw i32 %35, 1
  %37 = load i32, i32* %7
  %38 = call i32 @m_r(i32* %34, i32 %36, i32 %37)
  store i32 %38, i32* %10
  %39 = load i32, i32* %9
  %40 = load i32, i32* %10
  %41 = icmp sgt i32 %39, %40
  br i1 %41, label %42, label %44
42:
  %43 = load i32, i32* %9
  br label %46
44:
  %45 = load i32, i32* %10
  br label %46
46:
  %47 = phi i32 [ %43, %42 ], [ %45, %44 ]
  store i32 %47, i32* %4
  br label %51
51:
  %52 = load i32, i32* %4
  ret i32 %52
}
define dso_local i32 @FindMax(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %4
  %6 = icmp sgt i32 %5, 0
  br i1 %6, label %7, label %12
7:
  %8 = load i32*, i32** %3
  %9 = load i32, i32* %4
  %10 = sub nsw i32 %9, 1
  %11 = call i32 @m_r(i32* %8, i32 0, i32 %10)
  br label %13
12:
  br label %13
13:
  %14 = phi i32 [ %11, %7 ], [ 0, %12 ]
  ret i32 %14
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %3
  br label %53
12:
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  store i32 %15, i32* %6
  %17 = load i32, i32* %6
  %18 = sext i32 %17 to i64
  %19 = mul i64 %18, 4
  %20 = call noalias i8* @malloc(i64 %19)
  store i32* %21, i32** %7
  store i32 0, i32* %8
  br label %23
23:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %6
  %26 = icmp slt i32 %24, %25
  br i1 %26, label %29, label %27
27:
  br label %44
29:
  %30 = load i8**, i8*** %5
  %31 = load i32, i32* %8
  %32 = add nsw i32 %31, 1
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8*, i8** %30, i64 %33
  %35 = load i8*, i8** %34
  %36 = call i32 @atoi(i8* %35)
  %37 = load i32*, i32** %7
  %38 = load i32, i32* %8
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  store i32 %36, i32* %40
  br label %41
41:
  %42 = load i32, i32* %8
  %43 = add nsw i32 %42, 1
  store i32 %43, i32* %8
  br label %23
44:
  %45 = load i32*, i32** %7
  %46 = load i32, i32* %6
  %47 = call i32 @FindMax(i32* %45, i32 %46)
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %47)
  %49 = load i32*, i32** %7
  call void @free(i8* %50)
  store i32 0, i32* %3
  br label %53
53:
  %54 = load i32, i32* %3
  ret i32 %54
}
declare noalias i8* @malloc(i64)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
