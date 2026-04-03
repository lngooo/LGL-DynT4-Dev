@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @X0(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %12 = load i32*, i32** %4
  store i32* %12, i32** %7
  store i32 0, i32* %8
  %15 = load i32, i32* %5
  %16 = call i32 @llvm.ctlz.i32(i32 %15, i1 true)
  %17 = sub nsw i32 31, %16
  %18 = shl i32 1, %17
  store i32 %18, i32* %9
  br label %19
19:
  %20 = load i32, i32* %9
  %21 = icmp sgt i32 %20, 0
  br i1 %21, label %22, label %44
22:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %9
  %26 = or i32 %24, %25
  store i32 %26, i32* %10
  %27 = load i32, i32* %10
  %28 = load i32, i32* %5
  %29 = icmp slt i32 %27, %28
  br i1 %29, label %30, label %40
30:
  %31 = load i32*, i32** %7
  %32 = load i32, i32* %10
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = load i32, i32* %6
  %37 = icmp sle i32 %35, %36
  br i1 %37, label %38, label %40
38:
  %39 = load i32, i32* %10
  store i32 %39, i32* %8
  br label %40
40:
  %41 = load i32, i32* %9
  %42 = ashr i32 %41, 1
  store i32 %42, i32* %9
  br label %19
44:
  %45 = load i32*, i32** %7
  %46 = load i32, i32* %8
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %45, i64 %47
  %49 = load i32, i32* %48
  %50 = load i32, i32* %6
  %51 = icmp eq i32 %49, %50
  br i1 %51, label %52, label %54
52:
  %53 = load i32, i32* %8
  br label %55
54:
  br label %55
55:
  %56 = phi i32 [ %53, %52 ], [ -1, %54 ]
  ret i32 %56
}
declare i32 @llvm.ctlz.i32(i32, i1 immarg)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 3
  br i1 %11, label %12, label %13
12:
  store i32 1, i32* %3
  br label %61
13:
  %15 = load i8**, i8*** %5
  %16 = getelementptr inbounds i8*, i8** %15, i64 1
  %17 = load i8*, i8** %16
  %18 = call i32 @atoi(i8* %17)
  store i32 %18, i32* %6
  %20 = load i32, i32* %4
  %21 = sub nsw i32 %20, 2
  store i32 %21, i32* %7
  %23 = load i32, i32* %7
  %24 = sext i32 %23 to i64
  %25 = mul i64 %24, 4
  %26 = call noalias i8* @malloc(i64 %25)
  store i32* %27, i32** %8
  store i32 0, i32* %9
  br label %29
29:
  %30 = load i32, i32* %9
  %31 = load i32, i32* %7
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %35, label %33
33:
  br label %50
35:
  %36 = load i8**, i8*** %5
  %37 = load i32, i32* %9
  %38 = add nsw i32 %37, 2
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8*, i8** %36, i64 %39
  %41 = load i8*, i8** %40
  %42 = call i32 @atoi(i8* %41)
  %43 = load i32*, i32** %8
  %44 = load i32, i32* %9
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  store i32 %42, i32* %46
  br label %47
47:
  %48 = load i32, i32* %9
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %9
  br label %29
50:
  %51 = load i32*, i32** %8
  %52 = load i32, i32* %7
  %53 = load i32, i32* %6
  %54 = call i32 @X0(i32* %51, i32 %52, i32 %53)
  %55 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %54)
  %56 = load i32*, i32** %8
  call void @free(i8* %57)
  store i32 0, i32* %3
  br label %61
61:
  %62 = load i32, i32* %3
  ret i32 %62
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare noalias i8* @malloc(i64)
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
