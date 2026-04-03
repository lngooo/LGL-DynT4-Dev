%struct.Range = type { i32, i32 }
@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @BinarySearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca %struct.Range
  %9 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %10 = load i32, i32* %6
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i32 -1, i32* %4
  br label %68
13:
  %15 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  store i32 0, i32* %15
  %16 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 1
  %17 = load i32, i32* %6
  %18 = sub nsw i32 %17, 1
  store i32 %18, i32* %16
  br label %19
19:
  %20 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  %21 = load i32, i32* %20
  %22 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 1
  %23 = load i32, i32* %22
  %24 = icmp slt i32 %21, %23
  br i1 %24, label %25, label %52
25:
  %27 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  %28 = load i32, i32* %27
  %29 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 1
  %30 = load i32, i32* %29
  %31 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  %32 = load i32, i32* %31
  %33 = sub nsw i32 %30, %32
  %34 = sdiv i32 %33, 2
  %35 = add nsw i32 %28, %34
  store i32 %35, i32* %9
  %36 = load i32*, i32** %5
  %37 = load i32, i32* %9
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  %41 = load i32, i32* %7
  %42 = icmp slt i32 %40, %41
  br i1 %42, label %43, label %47
43:
  %44 = load i32, i32* %9
  %45 = add nsw i32 %44, 1
  %46 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  store i32 %45, i32* %46
  br label %50
47:
  %48 = load i32, i32* %9
  %49 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 1
  store i32 %48, i32* %49
  br label %50
50:
  br label %19
52:
  %53 = load i32*, i32** %5
  %54 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  %55 = load i32, i32* %54
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %53, i64 %56
  %58 = load i32, i32* %57
  %59 = load i32, i32* %7
  %60 = icmp eq i32 %58, %59
  br i1 %60, label %61, label %64
61:
  %62 = getelementptr inbounds %struct.Range, %struct.Range* %8, i32 0, i32 0
  %63 = load i32, i32* %62
  br label %65
64:
  br label %65
65:
  %66 = phi i32 [ %63, %61 ], [ -1, %64 ]
  store i32 %66, i32* %4
  br label %68
68:
  %69 = load i32, i32* %4
  ret i32 %69
}
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
  %54 = call i32 @BinarySearch(i32* %51, i32 %52, i32 %53)
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
